class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        int element = nums[0];
        int count = 1;
        for(int i = 1; i < n && count >= 0; i++) {
            if(count == 0) {
                element = nums[i];
            }
            if(nums[i] == element) {
                count++;
            }
            else {
                count--;
            }
        }
        
        return element;
    }
};