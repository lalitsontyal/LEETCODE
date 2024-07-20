class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int row = rowSum.size();
        int col = colSum.size();
        vector<vector<int>> matrix(row,vector<int>(col,0));
        int i=0,j=0;
        while(i<row && j< col)
        {
            int x=min(rowSum[i],colSum[j]);

            matrix[i][j] = x;

            rowSum[i] -= x;
            colSum[j] -= x;

            if(rowSum[i] == 0)
                i++;
            if(colSum[j] == 0)
                j++;
        }
        return matrix;
    }
};