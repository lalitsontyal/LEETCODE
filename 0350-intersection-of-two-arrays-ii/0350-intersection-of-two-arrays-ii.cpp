class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int,int> mp;
        if(nums1.size() <= nums2.size())
        {
            for(int i=0;i<nums1.size();i++)
            {
                mp[nums1[i]]++;
            }
            for(auto it : nums2)
            {
                if(mp[it] > 0)
                {
                    res.push_back(it);
                    mp[it]--;
                }
            }
        }
        else
        {
            for(int i=0;i<nums2.size();i++)
            {
                mp[nums2[i]]++;
            }
            for(auto it : nums1)
            {
                if(mp[it] > 0)
                {
                    res.push_back(it);
                    mp[it]--;
                }
            }

        }
        return res;
    }
};