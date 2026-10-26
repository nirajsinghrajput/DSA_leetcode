class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        combinations(candidates, target, 0);
        return ans;
    }
private:
    vector<vector<int>> ans;
    vector<int> temp;
    void combinations(vector<int>& candidates, int target, int idx) {
        if(target == 0) {
            ans.push_back(temp);
            return;
        }
        if(target < 0) return;

        for(int i = idx; i < candidates.size() && target >= candidates[i]; i++) {
            if(i > idx && candidates[i] == candidates[i-1]) continue;

            temp.push_back(candidates[i]);
            
            combinations(candidates, target - candidates[i], i+1);
            temp.pop_back();
        }
    }
};