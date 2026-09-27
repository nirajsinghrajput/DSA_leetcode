class Solution {
public:
    int myAtoi(string s) {
        long long num = 0;
        int sign = 1;
        int i = 0;

        while (i < s.size() && s[i] == ' ') {
            i++;
        }

        if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        while (i < s.size() && isdigit(s[i])) {
            int digit = s[i] - '0';

            num = num * 10 + digit;

            if (sign == 1 && num > INT_MAX) {
                return INT_MAX;
            }

            if (sign == -1 && num > 2147483648LL) {
                return INT_MIN;
            }

            i++;
        }

        return num * sign;
    }
};