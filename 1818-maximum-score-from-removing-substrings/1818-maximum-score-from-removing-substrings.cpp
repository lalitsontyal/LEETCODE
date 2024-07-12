#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int maximumGain(string s, int x, int y) {
        vector<char> vec1, vec2;
        int score = 0;

        if (y > x) {
            for (char i : s) {
                if (!vec1.empty() && vec1.back() == 'b' && i == 'a') {
                    vec1.pop_back();
                    score += y;
                } else {
                    vec1.push_back(i);
                }
            }

            for (char i : vec1) {
                if (!vec2.empty() && vec2.back() == 'a' && i == 'b') {
                    vec2.pop_back();
                    score += x;
                } else {
                    vec2.push_back(i);
                }
            }
        } else {
            for (char i : s) {
                if (!vec1.empty() && vec1.back() == 'a' && i == 'b') {
                    vec1.pop_back();
                    score += x;
                } else {
                    vec1.push_back(i);
                }
            }

            for (char i : vec1) {
                if (!vec2.empty() && vec2.back() == 'b' && i == 'a') {
                    vec2.pop_back();
                    score += y;
                } else {
                    vec2.push_back(i);
                }
            }
        }

        return score;
    }
};
