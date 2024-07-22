/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* nextNode = reverseList(head->next);
        ListNode* front = head->next;
        head->next = NULL;
        front->next = head;
        return nextNode;
    }
    bool isPalindrome(ListNode* head) {
        if(head== NULL || head->next == NULL)
        return true;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        // ListNode* middle = slow;
        ListNode* rev = reverseList(prev->next);
        ListNode* start = head;
        while (rev != NULL) {
            if (start->val != rev->val)
                return false;
            start = start->next;
            rev = rev->next;
        }
        rev = reverseList(prev->next);
        return true;
    }
};