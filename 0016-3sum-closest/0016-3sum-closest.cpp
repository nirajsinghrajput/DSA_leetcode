class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        int closest = nums[1] + nums[0] + nums[2];

        for(int x = 0; x < n - 2; x++) {
            if(x > 0 && nums[x] == nums[x-1]) continue;
            int y = x + 1;
            int z = n - 1;
            while(y < z) {
                int temp = nums[x] + nums[y] + nums[z];

                if(abs(target - temp) < abs(target - closest)) {
                    closest = temp;
                }
    
                if(target == temp) {
                    return temp;
                }
                if(target < temp) {
                    z--;
                }
                else {
                    y++;
                }
            }
        }
        return closest;
    }
};