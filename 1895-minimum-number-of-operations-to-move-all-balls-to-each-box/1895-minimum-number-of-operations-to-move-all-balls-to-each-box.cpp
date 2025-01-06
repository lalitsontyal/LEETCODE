class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> sol(n, 0); // Initialize sol with size n and all elements as 0
        int next = 0, back = 0;

        // First pass: calculate for the first box and count `next`
        for (int i = 0; i < n; i++) {
            if (boxes[i] == '1') {
                next++;
                sol[0] += i; // Calculate distance from all '1's to the first box
            }
        }

        // Adjust `next` and `back` for the first box
        if (boxes[0] == '1') {
            next--;
            back++;
        }

        // Second pass: calculate for the rest of the boxes
        for (int i = 1; i < n; i++) {
            sol[i] = sol[i - 1] - next + back; // Transition from previous result
            if (boxes[i] == '1') {
                next--;
                back++;
            }
        }

        return sol;
    }
};
