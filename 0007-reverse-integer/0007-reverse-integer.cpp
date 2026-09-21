class Solution {
public:
    int reverse(int x) {
        long int rev = 0;
        while(x!=0){
            rev = rev*10 + x%10;
            x /= 10;
        }
        if(rev > pow(2,31)-1 || rev < pow(2,31)*(-1)) return 0;
        return rev;
    }
};