class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves = 0;
        int grtst = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] > grtst) {
                moves += i*(nums[i] - grtst);
                grtst = nums[i];
            }
            else{
                moves += grtst - nums[i];
            }
        }

        return moves;
    }
};