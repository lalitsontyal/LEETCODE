class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> sol;
        vector<int> preSum(words.size() + 1, 0);
        
        // Build the prefix sum array
        for (int i = 0; i < words.size(); i++) {
            auto word = words[i];
            int n = word.size();
            if ((word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u') &&
                (word[n - 1] == 'a' || word[n - 1] == 'e' || word[n - 1] == 'i' || word[n - 1] == 'o' || word[n - 1] == 'u')) {
                preSum[i + 1] = preSum[i] + 1;
            } else {
                preSum[i + 1] = preSum[i];
            }
        }
        
        // Process the queries
        for (auto it : queries) {
            int lb = it[0], ub = it[1];
            sol.push_back(preSum[ub + 1] - preSum[lb]);
        }
        
        return sol;
    }
};
