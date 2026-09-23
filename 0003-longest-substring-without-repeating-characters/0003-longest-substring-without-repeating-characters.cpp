class Solution {
public:
    // int lengthOfLongestSubstring(string s) {
    //     int maxLen = 0;
    //     int left = 0;
    //     unordered_set<char> st;
    //     for(int right = 0; right < s.length(); right++){
    //         while(st.count(s[right])) {
    //             st.erase(s[left]);
    //             left++;
    //         }

    //         st.insert(s[right]);

    //         maxLen = max(maxLen, right - left + 1);
    //     }
    //     return maxLen;
    // }
    int lengthOfLongestSubstring(string s) {
        int last[128] = {};
        int left = 0;
        int maxLen = 0;

        for(int right = 0; right < s.length(); right++) {
            left = max(left, last[(unsigned char)s[right]]);

            last[(unsigned char)s[right]] = right + 1;

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};