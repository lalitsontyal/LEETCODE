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
    ListNode* mergeNodes(ListNode* head) {
      ListNode* back = head-> next;
      ListNode* curr = back;
      while(curr != NULL){
        int sum = 0;
        while(curr->val != 0)
        {
            sum += curr->val;
            curr = curr->next;
        }
        back->val = sum;
        curr = curr->next;
        back->next = curr;
        back = back->next;
      }  
      return head->next;
    }
};