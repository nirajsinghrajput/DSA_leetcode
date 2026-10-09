class Solution {
public:
    int minInsertions(string s) {
        int min = 0;

        stack<char> brkt;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(') {
                brkt.push('(');
            }
            else {
                if(brkt.empty()) {
                    if(i != s.length() - 1) {
                        if(s[i+1] == ')') {
                            min++;
                            i++;
                            continue;
                        }
                    }
                    min += 2;
                    continue;
                }
                else {
                    if(i != s.length() - 1) {
                        if(s[i+1] == ')') {
                            brkt.pop();
                            i++;
                            continue;
                        }
                    }
                    brkt.pop();
                    min++;
                }
            }
        }
        min += brkt.size()*2;

        return min;
    }
};