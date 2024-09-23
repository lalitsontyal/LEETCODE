class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int lb=0,ub=n-1,mid=0;
        // 0 - lb-1 0
        // lb - mid-1 1
        // ub+1 - n-1 2  
        // mid - ub unsorted
        while(mid <= ub)
        {
            if(nums[mid] == 2)
            {
                swap(nums[mid],nums[ub]);
                ub--;
            }
           else if(nums[mid] == 0)
            {
                swap(nums[lb],nums[mid]);
                lb++;
                mid++;
            }
            else
            {
                mid++;
            }
        }
    }
};