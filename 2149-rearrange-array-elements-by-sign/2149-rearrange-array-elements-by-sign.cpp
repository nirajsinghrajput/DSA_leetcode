class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int pop = 0;
        int pon = 1;
        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                ans[pop] = nums[i];
                pop +=2;
            }
            else {
                ans[pon] = nums[i];
                pon += 2;
            }
        }
        return ans;
    }
};