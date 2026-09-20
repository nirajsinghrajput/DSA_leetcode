class Solution {
public:
    int reverseDegree(string s) {
        int idx = 1;
        int revDegree = 0;
        for(auto it : s){
            revDegree += (122 - it + 1)*idx;
            idx++;
        }
        return revDegree;
    }
};