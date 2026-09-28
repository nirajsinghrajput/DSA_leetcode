class Solution {
public:
    int maxDepth(string s) {
        vector<char> parentheses;
        int maxDepth = 0;
        int count = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(') {
                parentheses.push_back(s[i]);
                count++;
                maxDepth = max(count, maxDepth);
            }
            else if(s[i] == ')') {
                parentheses.pop_back();
                count--;
            }
        }
        return maxDepth;
    }
};