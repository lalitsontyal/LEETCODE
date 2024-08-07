class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,res=INT_MIN;
        for(int it : nums)
        {
            sum += it;
            res=max(res,sum);
            if(sum < 0)
                sum=0;
            
        }
        return res;
    }
};