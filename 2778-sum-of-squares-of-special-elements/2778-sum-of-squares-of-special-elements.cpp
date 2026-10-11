class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        vector<int> factors;
        for(int i = 1; i <= nums.size()/i; i++) {
            if(nums.size()%i == 0) {
                factors.push_back(i);
                if(i != nums.size()/i) {
                    factors.push_back(nums.size()/i);
                }
            }
        }

        int sum = 0;
        for(int i = 0; i < factors.size(); i++) {
            sum += nums[factors[i]-1]*nums[factors[i]-1];
        }
        return sum;
    }
};