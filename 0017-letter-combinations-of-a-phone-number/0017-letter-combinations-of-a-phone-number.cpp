class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;

        if (digits.empty()) return ans;

        backtrack(0, "", digits, ans);
        return ans;
    }

private:
    unordered_map<int, vector<string>> mp = {
        {2, {"a", "b", "c"}},
        {3, {"d", "e", "f"}},
        {4, {"g", "h", "i"}},
        {5, {"j", "k", "l"}},
        {6, {"m", "n", "o"}},
        {7, {"p", "q", "r", "s"}},
        {8, {"t", "u", "v"}},
        {9, {"w", "x", "y", "z"}}
    };

    void backtrack(int index, string current,
                   const string& digits, vector<string>& ans) {
        // Base case
        if (index == digits.size()) {
            ans.push_back(current);
            return;
        }

        int digit = digits[index] - '0';

        // Try every letter for the current digit
        for (int i = 0; i < mp[digit].size(); i++) {
            current += mp[digit][i];

            backtrack(index + 1, current, digits, ans);

            // Undo the choice
            current.pop_back();
        }
    }
};
//--------------------Brute Force(iterative)-------------------//
// class Solution {
// public:
//     vector<string> letterCombinations(string digits) {
//         vector<string> comb;
//         for(int i = 0; i < mp[digits[0] - '0'].size(); i++) {
//             comb.push_back(mp[digits[0] - '0'][i]);
//         }
//         for(int i = 1; i < digits.size(); i++) {
//             vector<string> temp;
//             for(int j = 0; j < comb.size(); j++) {
//                 for(int k = 0; k < mp[digits[i] - '0'].size(); k++) {
//                     temp.push_back(comb[j] + mp[digits[i] - '0'][k]);
//                 }
//             }
//             comb = temp;
//         }
//         return comb;
//     }
// private:
//     unordered_map<int, vector<string>> mp = {
//         {2, {"a", "b", "c"}},
//         {3, {"d", "e", "f"}},
//         {4, {"g", "h", "i"}},
//         {5, {"j", "k", "l"}},
//         {6, {"m", "n", "o"}},
//         {7, {"p", "q", "r", "s"}},
//         {8, {"t", "u", "v"}},
//         {9, {"w", "x", "y", "z"}}
//     };
// };