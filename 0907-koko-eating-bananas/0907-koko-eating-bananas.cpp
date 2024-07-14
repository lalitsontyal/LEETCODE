class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(), piles.end());
        int lb = 1, ub = maxi, ans = INT_MAX, mid;

        while (lb <= ub) {
            mid = lb + (ub - lb) / 2;
            int res = 0;
            for (int pile : piles) {
                res += ceil((double)pile / mid);
                // If res exceeds h, we can break early
                if (res > h) break;
            }
            if (res <= h) {
                ans = mid;
                ub = mid - 1;
            } else {
                lb = mid + 1;
            }
        }
        return ans;
    }
};
