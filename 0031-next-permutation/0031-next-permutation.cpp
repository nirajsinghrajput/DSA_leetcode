class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //if(nums.size() == 1) return;
        for(int i = nums.size()-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                int j = nums.size()-1;
                int idx = i;
                while(j > i){
                    if(nums[j] > nums[i]){
                        if(nums[idx] > nums[i] && nums[idx] < nums[j]){
                            j--;
                            continue;
                        }
                        idx = j;
                    }
                    j--;
                }
                swap(nums[i],nums[idx]);
                sort(nums.begin()+i+1,nums.end());
                return;
            }
        }
        sort(nums.begin(),nums.end());
        return;
    }
};