class Solution {
public:
    bool isValid(string s) {
        vector<char> bracket;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                bracket.push_back(s[i]);
                continue;
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']') {
                if(bracket.size() == 0) return false;
                
                if(bracket.back() == '(' && s[i] == ')') {
                    bracket.pop_back();
                    continue;
                }
                else if(bracket.back() == '{' && s[i] == '}') {
                    bracket.pop_back();
                    continue;
                }
                else if(bracket.back() == '[' && s[i] == ']') {
                    bracket.pop_back();
                    continue;
                }
                else return false;
            }
            
        }
        if(bracket.size() == 0) return true;
        return false;
    }
};