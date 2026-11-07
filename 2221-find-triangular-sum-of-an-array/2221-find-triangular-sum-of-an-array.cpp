class Solution {
public:
    int triangularSum(vector<int>& nums) {
        helper(nums);
        return nums[0];
    }
private:
    void helper(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return;
        for(int i = 0; i < n - 1; i++) {
            nums[i] = (nums[i] + nums[i+1]) % 10;
        }
        nums.pop_back();
        helper(nums);
    }
};