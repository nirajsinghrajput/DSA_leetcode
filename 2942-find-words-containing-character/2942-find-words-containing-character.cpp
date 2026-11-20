class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int n = words.size();
        for(int i = 0; i < n; i++) {
            int j = 0;
            while(j < words[i].size()) {
                if(words[i][j] == x) {
                    ans.push_back(i);
                    break;
                }
                j++;
            }
        }
        return ans;
    }
};