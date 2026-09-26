class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mpp;

        for (auto &p : knowledge) {
            mpp[p[0]] = p[1];
        }

        string ans;
        size_t i = 0;

        while (i < s.size()) {
            if (s[i] == '(') {
                size_t j = i + 1;
                string key = "";

                while (j < s.size() && s[j] != ')') {
                    key += s[j];
                    j++;
                }

                if (mpp.find(key) != mpp.end()) {
                    ans += mpp[key];
                } else {
                    ans += '?';
                }

                i = j + 1;
            } 
            else {
                ans += s[i];
                i++;
            }
        }

        return ans;
    }
};

// class Solution {
// public:
//     string evaluate(string s, vector<vector<string>>& knowledge) {
//         unordered_map<string, string> mpp;
//         for(int i = 0; i < knowledge.size(); i++) {
//             mpp[knowledge[i][0]] = knowledge[i][1]; 
//         }
        
//         size_t start = 0;
//         while((start = s.find('(', start)) != string::npos) {
//             size_t end = s.find(')', start);

//             string word = s.substr(start+1, end - start - 1);
//             if(mpp.find(word) != mpp.end()) {
//                 s.replace(start, end - start + 1, mpp[word]);
//                 start += mpp[word].length();
//             }
//             else {
//                 s.replace(start, end - start + 1, "?");
//                 start += 1;
//             }
//         }
//         return s;
//     }
// };