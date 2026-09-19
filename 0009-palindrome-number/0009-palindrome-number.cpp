class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long dumX = x;
        long dummy = 0;
        while(x>0){
            dummy = dummy*10 + x%10;
            x = x/10;
        }
        if(dummy != dumX) return false;
        return true;
    }
};