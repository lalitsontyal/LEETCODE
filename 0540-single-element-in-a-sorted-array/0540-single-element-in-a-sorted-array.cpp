class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int lb=0;
        int ub=n-1;
        int mid;
        
        if(n==1)
            return nums[0];
        if(nums[0]!=nums[1])
            return nums[0];
        if(nums[n-1]!=nums[n-2])
            return nums[n-1];
        while(lb<=ub)
        {
            mid = (lb+ub)/2;
            if(nums[mid] != nums[mid+1]  && nums[mid] != nums[mid-1])
                return nums[mid];
            else if( (mid%2==0 && nums[mid]==nums[mid+1]) ||
                     (mid%2==1 && nums[mid]==nums[mid-1]))
                lb=mid+1;
            else
                ub=mid-1;
        }
        return 0;
    }
};