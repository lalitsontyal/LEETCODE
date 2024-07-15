class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int count = 0;  // This will act as a balance counter.
        
        for(char c : s) {
            if(c == '(') {
                if(count > 0) {
                    result += c;
                }
                count++;
            } else if(c == ')') {
                count--;
                if(count > 0) {
                    result += c;
                }
            }
        }
        
        return result;
    }
};
