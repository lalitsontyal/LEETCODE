class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int count = 0;
        long long totalSum = 0, leftSum = 0;

        // Calculate total sum of the array
        for (int num : nums) {
            totalSum += num;
        }

        // Iterate to find valid splits
        for (int i = 0; i < nums.size() - 1; ++i) {
            leftSum += nums[i];
            if (leftSum >= totalSum - leftSum) {
                ++count;
            }
        }

        return count;
    }
};
