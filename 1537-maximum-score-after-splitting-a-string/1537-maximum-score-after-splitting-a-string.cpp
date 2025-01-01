class Solution {
public:
    int maxScore(string s) {
        int zero=0,one=0,res=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '1')
                one += 1;
        }
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i] == '0')
                zero+=1;
            else
                one -=1;
            res=max(res,one+zero);
        }

        return res;
    }
};