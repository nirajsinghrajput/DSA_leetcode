class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        for(int i = nums.size()-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                int j = nums.size()-1;
                while(j > i){
                    if(nums[j] > nums[i]){
                        break;
                    }
                    j--;
                }
                swap(nums[i],nums[j]);
                sort(nums.begin()+i+1,nums.end());
                return;
            }
        }
        sort(nums.begin(),nums.end());
        return;
    }
};