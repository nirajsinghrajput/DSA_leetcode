
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();

        for(int i = 0; i < n; i++) {
            s[i] = tolower(s[i]);
        }

        int j = 0;

        for(int i = 0; i < n; i++) {
            if((s[i] >= 'a' && s[i] <= 'z') ||
               (s[i] >= '0' && s[i] <= '9')) {
                s[j] = s[i];
                j++;
            }
        }

        int i = 0;
        j--;

        while(i < j) {
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }

        return true;
    }
};
