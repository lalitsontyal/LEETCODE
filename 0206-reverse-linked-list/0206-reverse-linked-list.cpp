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
    ListNode* reverseDone(ListNode* head)
    {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* newHead = reverseDone(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    } 
    ListNode* reverseList(ListNode* head) {
        // recursive way
        return reverseDone(head);
    }
};