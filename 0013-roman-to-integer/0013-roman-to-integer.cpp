class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        for(int i = 0; i < s.length(); i++) {

            if(i != s.length()-1) {
                if(s[i] == 'I') {
                    if(s[i+1] == 'V') {
                        ans += 4;
                        i++;
                        continue;
                    }
                    else if(s[i+1] == 'X') {
                        ans += 9;
                        i++;
                        continue;
                    }
                }
                else if(s[i] == 'X') {
                    if(s[i+1] == 'L') {
                        ans += 40;
                        i++;
                        continue;
                    }
                    else if(s[i+1] == 'C') {
                        ans += 90;
                        i++;
                        continue;
                    }
                }
                else if(s[i] == 'C') {
                    if(s[i+1] == 'D') {
                        ans += 400;
                        i++;
                        continue;
                    }
                    if(s[i+1] == 'M') {
                        ans += 900;
                        i++;
                        continue;
                    }
                }
            }
            if(s[i] == 'I') {
                ans += 1;
            }
            else if(s[i] == 'V') {
                ans += 5;
            }
            else if(s[i] == 'X') {
                ans += 10;
            }
            else if(s[i] == 'L') {
                ans += 50;
            }
            else if(s[i] == 'C') {
                ans += 100;
            }
            else if(s[i] == 'D') {
                ans += 500;
            }
            else{
                ans += 1000;
            }
        }
        return ans;
    }
};