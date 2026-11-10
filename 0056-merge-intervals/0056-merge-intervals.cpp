class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> ans;
        vector<int> merged = intervals[0];
        for(int i = 1; i < n; i++) {
            if(intervals[i][0] > merged[1]) {
                ans.push_back(merged);
                merged = intervals[i];
            }
            else {
                merged[1] = max(merged[1], intervals[i][1]);
            }
        }
        ans.push_back(merged);
        return ans;
    }
};