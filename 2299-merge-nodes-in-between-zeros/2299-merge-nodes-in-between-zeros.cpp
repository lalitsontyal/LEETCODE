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
     // ListNode* p = NULL;  
      
      ListNode* q = head-> next;
      ListNode* r = q;
      while(r != NULL){
        int sum = 0;
        while(r->val != 0)
        {
            sum += r->val;
            r=r->next;
        }
        q->val = sum;
        r=r->next;
        q->next= r;
        q=q->next;
      }  
      return head->next;
    }
};