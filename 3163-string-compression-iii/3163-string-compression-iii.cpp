class Solution {
public:
    string compressedString(string word) {
        string compressed_string;
        int count = 1;
        char ch = word[0];
        for(int i = 1; i < word.length(); i++) {
            if(word[i] == ch) {
                if(count == 9) {
                    compressed_string.push_back(count + '0');
                    compressed_string.push_back(ch);
                    count = 0;
                }
                count++;
            }
            else {
                compressed_string.push_back(count + '0');
                compressed_string.push_back(ch);
                ch = word[i];
                count = 1;
            }
        }
        compressed_string.push_back(count + '0');
        compressed_string.push_back(ch);
        
        return compressed_string;
    }
};