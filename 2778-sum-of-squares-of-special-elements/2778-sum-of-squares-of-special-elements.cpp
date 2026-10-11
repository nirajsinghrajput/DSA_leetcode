class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        vector<int> factors;
        int n = nums.size();
        for(int i = 1; i <= n/i; i++) {
            if(n%i == 0) {
                factors.push_back(i);
                if(i != n/i) {
                    factors.push_back(n/i);
                }
            }
        }

        int sum = 0;
        for(int i = 0; i < factors.size(); i++) {
            int j = factors[i];
            sum += nums[j-1]*nums[j-1];
        }
        return sum;
    }
};