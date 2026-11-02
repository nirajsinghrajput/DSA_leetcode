class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int j = 0;
        int count = 1;
        char ch = chars[0];
        for(int i = 1; i < n; i++) {
            if(chars[i] == ch) {
                count++;
            }
            else {
                chars[j] = chars[i-1];
                j++;
                if(count > 1) {
                    string cnt = to_string(count);
                    int size = cnt.size();
                    for(int i = 0; i < size; i++) {
                        chars[j] = cnt[i];
                        j++;
                    }
                }
                ch = chars[i];
                count = 1;
            }
        }
        chars[j++] = chars[n-1];
        if(count > 1) {
            string cnt = to_string(count);
            int size = cnt.size();
            for(int i = 0; i < size; i++) {
                chars[j] = cnt[i];
                j++;
            }
        }
        return j;
    }
};