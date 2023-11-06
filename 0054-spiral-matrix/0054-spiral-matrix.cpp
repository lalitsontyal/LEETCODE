class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int top=0,bottom=row-1,left=0,right=col-1;
        vector<int> sonti;
        int dir=0;
        while(top<=bottom && left<=right)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    sonti.push_back(matrix[top][i]);
                }
                top=top+1;
            }
            else if(dir==1)
            {
                for(int i=top;i<=bottom;i++)
                {
                    sonti.push_back(matrix[i][right]);
                }
                right=right-1;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    sonti.push_back(matrix[bottom][i]);
                }
                bottom=bottom-1;
            }
            else if(dir==3)
            {
                for(int i=bottom;i>=top;i--)
                {
                    sonti.push_back(matrix[i][left]);
                }
                left=left+1;
            }
            dir=(dir+1)%4;
        }
        return sonti;
    }
};