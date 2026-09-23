class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        int target = total - x;
        if(total < x) return -1;
        if(total == x) return nums.size();

        int left = 0;
        int sum = 0;
        int maxLen = -1;

        for(int right = 0; right < nums.size(); right++){
            sum += nums[right];
            if(sum > target){
                while(sum > target){
                    sum -= nums[left];
                    left++;
                }
            }
            if(sum == target){
                maxLen = max(maxLen, right - left + 1);
            }
        }

        if(maxLen == -1) return -1;

        return nums.size() - maxLen;
    }
};