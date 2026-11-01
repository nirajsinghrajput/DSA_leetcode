class Solution {
public:
    int factorial(int n) {
        if(n <= 1) return 1;
        return n * factorial(n - 1);
    }
    void nextPermutation(vector<int>& nums) {
        for(int i = nums.size()-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                int j = nums.size()-1;
                while(nums[j] <= nums[i]){
                    j--;
                }
                swap(nums[i],nums[j]);
                reverse(nums.begin()+i+1,nums.end());
                return;
            }
        }
        reverse(nums.begin(),nums.end());
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = factorial(nums.size());
        for(int i = 0; i < n; i++) {
            nextPermutation(nums);
            ans.push_back(nums);
        }
        return ans;
    }
};