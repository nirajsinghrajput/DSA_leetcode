class Solution {
public:
    void combinations(vector<vector<int>>& ans, vector<int>& candidates, vector<int>& temp, int target, int idx) {
        if(target == 0) {
            ans.push_back(temp);
            return;
        }
        if(target < 0) return;

        for(int i = idx; i < candidates.size(); i++) {
            temp.push_back(candidates[i]);

            combinations(ans, candidates, temp, target - candidates[i], i);

            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;

        combinations(ans, candidates, temp, target, 0);

        return ans;
    }
    
};