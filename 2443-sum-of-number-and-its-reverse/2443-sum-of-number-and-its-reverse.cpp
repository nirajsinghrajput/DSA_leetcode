class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        for (int x = 0; x <= num; x++) {
            int rev = 0;
            int dummy = x;
            while (dummy) {
                rev = rev * 10 + dummy % 10;
                dummy /= 10;
            }
            if (x + rev == num)
                return true;
            }
        return false;
    }
};