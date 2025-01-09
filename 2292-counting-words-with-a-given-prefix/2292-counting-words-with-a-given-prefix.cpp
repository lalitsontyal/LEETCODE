class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=pref.size();
        int count=0;
        for(auto it : words)
        {
            //string word = it;
            if(it.substr(0,n)==pref && it.size() >=n)
                count++;
        }
        return count;
    }
};