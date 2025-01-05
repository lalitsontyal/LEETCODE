class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> netShift(s.size() + 1, 0); // To accumulate net shifts

        // Process the shifts array
        for (auto& it : shifts) {
            int start = it[0];
            int end = it[1];
            int dir = it[2];

            if (dir == 1) {
                netShift[start] += 1;
                netShift[end + 1] -= 1;
            } else {
                netShift[start] -= 1;
                netShift[end + 1] += 1;
            }
        }

        // Compute the prefix sum of netShift to apply shifts
        int currentShift = 0;
        for (int i = 0; i < s.size(); i++) {
            currentShift += netShift[i];
            int shift = (currentShift % 26 + 26) % 26; // Ensure positive shift within [0, 25]

            s[i] = 'a' + (s[i] - 'a' + shift) % 26; // Wrap around
        }

        return s;
    }
};
