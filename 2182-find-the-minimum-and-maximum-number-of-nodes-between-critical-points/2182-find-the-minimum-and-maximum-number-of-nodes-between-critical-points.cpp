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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> nums;
        vector<int> res(2);
        ListNode* curr = head->next;
        ListNode* prev = head;
        int pos = 2;
        while(curr -> next != NULL)
        {
            if( ( (curr -> val > prev -> val)
             && (curr -> val > curr->next -> val))
             || ( (curr -> val < prev -> val) 
             && (curr -> val < curr->next -> val) ) )
                nums.push_back(pos);
            curr=curr->next;
            prev= prev->next;
            pos += 1;
        }
        if(nums.size() < 2)
            return {-1,-1};
        int n = nums.size();
        int mini = INT_MAX;
        for(int i=1;i<n;i++)
        {
            mini= min(mini,nums[i]-nums[i-1]);
        }
        res[0]= mini;
        res[1] = abs(nums[0] - nums[n-1]);
        return res;
    }
};