class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        
        vector<vector<int>> ans;

        int n = nums.size();
       
        for(int x = 0; x < n - 2; x++) {
            if(x > 0 && nums[x] == nums[x-1]) continue;

            if(nums[x] > 0) break;

            int z = n-1;
            int y = x + 1;
            while(y < z) {
                int temp = nums[y] + nums[z];
                if(temp == -nums[x]) {
                    ans.push_back({nums[x], nums[y], nums[z]});
                    z--;
                    y++;

                    while(y < z && nums[y] == nums[y-1]) y++;
                    while(y < z && nums[z] == nums[z+1]) z--;
                }
                else if(temp > -nums[x]) {
                    z--;
                }
                else {
                    y++;
                }
            }
        }
        return ans;
    }
};