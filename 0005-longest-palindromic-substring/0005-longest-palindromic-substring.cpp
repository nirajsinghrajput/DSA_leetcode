class Solution {
public:
    string longestPalindrome(string s) {

        int start = 0;
        int end = 0;
 
        for(int i = 0; i < s.length(); i++) {
            int odd = palindrome(s, i, i);
            int even = palindrome(s, i, i+1);
            int max_len = max(odd, even);

            if(max_len > end - start) {
                start  = i - (max_len - 1)/2;
                end = i + max_len/2;
            }
        }

        return s.substr(start, end - start + 1);
    }
private:
    int palindrome(string s, int low, int high) {
        while(low >= 0 && high < s.length() && s[low] == s[high]) {
            low--;
            high++;
        }
        return high - low - 1;
    }
};