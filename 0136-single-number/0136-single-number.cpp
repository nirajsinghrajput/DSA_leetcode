class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int unique_value = 0;
        for(int val : nums){
            unique_value = val^unique_value;
        }
        return unique_value;
    }
};