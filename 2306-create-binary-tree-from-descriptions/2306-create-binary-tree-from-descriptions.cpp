/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& des) {
        
        int n = des.size();
        unordered_map<int, TreeNode*> mp;
        unordered_set<int> s;

        for(int i = 0; i < n; i++)
        {
            if(!mp.count(des[i][0]))
            {
                mp[des[i][0]] = new TreeNode(des[i][0]);
                s.insert(des[i][0]);
            }
            if(!mp.count(des[i][1]))
            {
                mp[des[i][1]] = new TreeNode(des[i][1]);
                s.insert(des[i][1]);
            }
        }


        for(int i = 0; i < n; i++)
        {
            if(des[i][2])
                mp[des[i][0]]->left = mp[des[i][1]];
            else    
                mp[des[i][0]]->right = mp[des[i][1]];

            if(s.count(des[i][1]))
                s.erase(des[i][1]);    
        }

        return mp[*(s.begin())];
    }
};