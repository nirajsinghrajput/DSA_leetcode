class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mp;
        for(auto s : strs) {

            vector<int> freq(26, 0);
            for(auto c : s) {
                freq[c - 'a']++;
            }

            string key;
            for(int count : freq) {
                key += to_string(count) + '#';
            }

            mp[key].push_back(s);
        }

        vector<vector<string>> anagrams;
        for(auto key : mp) {
            anagrams.push_back(key.second);
        }

        return anagrams;
    }
};