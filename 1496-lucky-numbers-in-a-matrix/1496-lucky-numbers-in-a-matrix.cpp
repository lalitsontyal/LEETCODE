class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
       vector<int> maxi(matrix[0].size(),INT_MIN);
       vector<int> mini(matrix.size(),INT_MAX);
       //int one=INT_MAX,two=INT_MAX;

       for(int i=0;i<matrix.size();i++)
       {
           for(int j=0;j<matrix[0].size();j++)
           {
                mini[i] = min(mini[i],matrix[i][j]);
           }
          // mini.push_back(one);
       }
       for(int i=0;i<matrix[0].size();i++)
       {
            for(int j=0;j<matrix.size();j++)
            {
                maxi[i]=max(maxi[i],matrix[j][i]);
            }
           // maxi.push_back(two);
       }
       vector<int> res;
       for(auto it : maxi)
       {
            if( find(mini.begin(),mini.end(),it) != mini.end())
            {
                res.push_back(it);
            }
       }
        return res;
    }
};