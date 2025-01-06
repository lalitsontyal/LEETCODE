class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> sol(n, 0); 
        int next = 0, back = 0;

        for (int i = 0; i < n; i++) {
            if (boxes[i] == '1') {
                next++;
                sol[0] += i; }
        }

        if (boxes[0] == '1') {
            next--;
            back++;
        }

        for (int i = 1; i < n; i++) {
            sol[i] = sol[i - 1] - next + back;
            if (boxes[i] == '1') {
                next--;
                back++;
            }
        }

        return sol;
    }
};
