class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        vector<int> ans;
        int count = 0;
        for(auto &it : mp) {
            int cnt = it.second;
            if(it.first == mp.begin()->first) {
                it.second = 0;
                count += cnt;
                continue;
            }
            it.second = count;
            count += cnt;
        }
        for(int i = 0; i < nums.size(); i++) {
            ans.push_back(mp[nums[i]]);
        }
        return ans;
    }
};