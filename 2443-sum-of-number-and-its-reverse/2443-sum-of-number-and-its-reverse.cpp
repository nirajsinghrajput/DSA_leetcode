class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        int original = num;

        for (int x = 0; x <= original; x++) {
            string s = to_string(x);
            reverse(s.begin(), s.end());

            int rev = stoi(s);

            if (x + rev == original)
                return true;
        }

        return false;
    }
};