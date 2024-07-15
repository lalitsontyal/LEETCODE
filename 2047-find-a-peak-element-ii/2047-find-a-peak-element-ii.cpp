class Solution {
public:
    int findMax(vector<vector<int>>& mat,int x)
    {
        int target=INT_MIN;
        int index=-1;
        for(int i=0;i<mat.size();i++)
        {
            if(mat[i][x]>target)
            {
                index=i;
                target=mat[i][x];
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        int i=0,j=col-1;
        while(i<=j)
        {
            int mid=(i+j)/2;
            int maxi=findMax(mat,mid);
            int left = (mid-1>=0) ? mat[maxi][mid-1]: -1;
            int right = (mid+1<col) ? mat[maxi][mid+1] : -1;
            if(mat[maxi][mid]>left && mat[maxi][mid]>right)
                return {maxi,mid};
            else if(mat[maxi][mid] < left )
                j=mid-1;
            else
                i=mid+1;
        }
        return {-1,-1};
    }
};