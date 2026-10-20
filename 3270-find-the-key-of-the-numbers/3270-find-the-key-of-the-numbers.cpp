class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        return generate(num1, num2, num3);
    }
private:
    int ans = 0;
    int generate(int x, int y, int z) {
        if(x == 0 || y == 0 || z == 0) {
            return 0;
        }
        int temp = min(x % 10, min(y % 10, z % 10));
        x /= 10;
        y /= 10;
        z /= 10;
        
        generate(x, y, z);
        return ans = ans*10 + temp;
    }
};