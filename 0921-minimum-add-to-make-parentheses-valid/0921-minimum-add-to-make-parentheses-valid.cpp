class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> brkt;
        int count = 0;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(') {
                brkt.push(s[i]);
            }
            else if(s[i] == ')') {
                if(!brkt.empty()) {
                    brkt.pop();
                }
                else {
                    count ++;
                }
            }
        }
        count += brkt.size();
        return count;
    }
};