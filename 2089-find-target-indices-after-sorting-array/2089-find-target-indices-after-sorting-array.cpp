class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        
        vector<int> ans;
        int first = -1;
        int last = -1;

        int low = 0;
        int high = n - 1;

        //first occurance
        while(low <= high) {
            int mid = low + (high - low)/2;

            if(nums[mid] >=  target) {
                if(nums[mid] == target) {
                    first = mid;
                }
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        low = 0;
        high = n - 1;
        //last occurance
        while(low <= high) {
            int mid = low + (high - low)/2;

            if(nums[mid] <=  target) {
                if(nums[mid] == target) {
                    last = mid;
                }
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        if(first == -1 || last == -1) return {};
        
        for(int i = first; i <= last; i++) {
            ans.push_back(i);
        }
        return ans;
    }
};