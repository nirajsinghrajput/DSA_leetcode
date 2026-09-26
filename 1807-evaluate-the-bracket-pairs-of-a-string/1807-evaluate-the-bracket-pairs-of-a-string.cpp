class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mpp;
        for(int i = 0; i < knowledge.size(); i++) {
            mpp[knowledge[i][0]] = knowledge[i][1]; 
        }
        
        size_t start = 0;
        while((start = s.find('(', start)) != string::npos) {
            size_t end = s.find(')', start);

            string word = s.substr(start+1, end - start - 1);
            if(mpp.find(word) != mpp.end()) {
                s.replace(start, end - start + 1, mpp[word]);
            }
            else {
                s.replace(start, end - start + 1, "?");
            }
            //start += word.length();
        }
        return s;
    }
};