class Solution {
public:
    bool canAliceWin(int n) {
        if(n < 10) return false;
        n -= 10;
        int t = 9;
        int count = 1;
        while(t <= n) {
            count++;
            n -= t;
            t--;
        }
        if(count % 2 == 0) return false;
        return true;
    }
};