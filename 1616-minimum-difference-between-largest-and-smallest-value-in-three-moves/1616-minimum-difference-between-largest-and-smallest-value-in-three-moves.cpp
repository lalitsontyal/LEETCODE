class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size() <= 4)
            return 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int option1 = nums[n-1] - nums[3];
        int option2 = nums[n-2] - nums[2];
        int option3 = nums[n-3] - nums[1];
        int option4 = nums[n-4] - nums[0];
        return min(option1, min(option2, min(option3,option4) ) );
    }
};