class Solution {
public:
    void helper(string& ans, int left, int right) {
        if(ans.length() == 0) {
            return;
        }

        int count = 0;
        char num = ans[right];
        for(int i = right; i >= 0; i--) {
            if(ans[i] == num) {
                count++;
                ans.pop_back();
            }
            else {
                right = i;
                break;
            }
        }
        helper(ans, 0, right);
        ans.push_back(count + '0');
        ans.push_back(num);
        return;
    }
    string countAndSay(int n) {
        string ans;
        ans.push_back('1');
        for(int i = 2; i <= n; i++) {
            helper(ans, 0, ans.length()-1);
        }
        return ans;
    }
};