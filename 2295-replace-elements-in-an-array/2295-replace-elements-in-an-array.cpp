class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }
        for(int i = 0; i < operations.size(); i++) {
            auto it = mp.find(operations[i][0]);
            if(it != mp.end()) {
                mp[operations[i][1]] = mp[operations[i][0]];
                mp.erase(it);
            }
        }

        for(auto it : mp) {
            nums[it.second] = it.first;
        }
        return nums;
    }
};