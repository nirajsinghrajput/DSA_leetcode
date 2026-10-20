class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int n = nums.size();

        int i = 0;
        while(nums[i] != 0) {
            if(i == n - 1) return;
            i++;
        }
        for(int j = i + 1; j < n; j++){
            if(nums[j] != 0) {
                nums[i] = nums[j];
                nums[j] = 0;
                i++;
            }
        }
    }
};