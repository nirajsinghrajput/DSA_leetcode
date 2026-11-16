class Solution {
public:
    string digitSum(string s, int k) {
        if(s.size() <= k) return s;

        int n = s.size();
        while(n > k) {
            string temp;
            int i = 0;
            while(i < n) {
                long long sum = 0;
                int j = i;
                while(j < i+k && j < n) {
                    sum += (s[j] - '0');
                    j++;
                }
                temp += to_string(sum);
                i += k;
            }
            s = temp;
            n = s.size();
        }
        return s;
    }
};