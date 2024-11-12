class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count=0,sum=0,i=0,j=0;
        while(j<arr.size())
        {
            sum += arr[j];
            if((j-i+1)<k)
            {
                j++;
            }
            else
            {
                int avg = (sum)/k;
                sum -= arr[i];
                i++;
                j++;
                if(avg >= threshold)
                {
                    count++;
                }
            }
        }
        return count;
    }
};