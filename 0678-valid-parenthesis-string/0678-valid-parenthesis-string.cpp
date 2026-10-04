class Solution {
public:
    bool checkValidString(string s) {
        vector<int> bracket;
        vector<int> star;

        for(int i = 0; i < s.length(); i++) {

            if(s[i] == '(') {
                bracket.push_back(i);
            }

            else if(s[i] == '*') {
                star.push_back(i);
            }

            else {
                if(!bracket.empty()) {
                    bracket.pop_back();
                }
                else if(!star.empty()) {
                    star.pop_back();
                }
                else {
                    return false;
                }
            }
        }

        while(!bracket.empty() && !star.empty()) {

            if(bracket.back() > star.back()) {
                return false;
            }

            bracket.pop_back();
            star.pop_back();
        }

        return bracket.empty();
    }
};