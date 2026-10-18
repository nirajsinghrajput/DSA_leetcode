class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;

        for(int i = 0; i <= rowIndex; i++) {
            vector<int> subAns;
            for(int j = 0; j <= i; j++) {
                if(j == 0 || j == i) {
                    subAns.push_back(1);
                }
                else {
                    int temp = ans[i-1][j-1] + ans[i-1][j];
                    subAns.push_back(temp);
                }
            }
            ans.push_back(subAns);
        }
        return ans.back();
        
    }
};