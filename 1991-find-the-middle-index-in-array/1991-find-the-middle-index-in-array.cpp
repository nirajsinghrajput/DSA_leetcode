class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        int tsum = 0;
        for(int i = 0; i < n; i++) {
            mp[i] = tsum;
            tsum += nums[i];
        }
        for(int i = 0; i < n; i++) {
            tsum -= nums[i];
            if(mp[i] == tsum) {
                return i;
            }
        }
        return -1;
    }
};