class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;

        int count = 0;
        int open = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ')' && count == 1){
                if(open + 1 != i) {
                    ans += s.substr(open+1,i-open-1);
                }
                open = i+1;
                count--;
                continue;
            }
            if(s[i] == '(') {
                count++;
            }
            else {
                count--;
            }
        }

        return ans;
    }
};