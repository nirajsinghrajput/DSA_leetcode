class Solution {
public:
    int scoreOfString(string s) {
        int n = s.size();
        int score = 0;
        for(int i = 1; i < n; i++) {
            score += abs(s[i-1] - s[i]);
        }
        return score;
    }
};