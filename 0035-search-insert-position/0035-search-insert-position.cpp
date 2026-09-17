class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid = 0;
        int low = 0;
        int high = nums.size() - 1;
        //while(nums[mid] != target && (mid != low || mid != high)){
        while(true){
            mid = low + (high - low)/2;
            if(low == mid){
                if(nums[mid] == target){
                    return mid;
                }
                else if(nums[mid] > target){
                    return mid;
                }
                break;
            }
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                low = mid;
            }
            else{
                high = mid;
            }
        }    
        if(mid == low){
            if(nums[high] == target){
                return high;
            }
            else if(nums[high] < target){
                return high+1;
            }    
            else{
                return mid + 1;
            }
        }
        return 0;
    }
};