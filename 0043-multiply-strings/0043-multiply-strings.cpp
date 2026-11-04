class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";
        int m = num1.length();
        int n = num2.length();

        vector<int> result(m + n, 0);
        for(int i = n - 1; i >= 0; i--) {
            for(int j = m - 1; j >= 0; j--) {
                int mul = (num1[j] - '0') * (num2[i] - '0');
                int sum = mul + result[i + j + 1];

                result[i + j + 1] = sum % 10;
                result[i + j] += sum/10;
            }
        }

        string ans;
        for(int i = 0; i < result.size(); i++) {
            if(ans.empty() && result[i] == 0) continue;
            ans += (result[i] + '0');
        }
        return ans;
    }
};