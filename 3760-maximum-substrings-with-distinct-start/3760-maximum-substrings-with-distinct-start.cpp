class Solution {
public:
    int maxDistinct(string s) {
        int n = s.length();
        set<char> st;
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(st.find(s[i]) != st.end()){
                continue;
            }
            count++;
            st.insert(s[i]);
        }
        return count;
    }
};