class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int n = numbers.size();

        for(int i = 0; i < n-1; i++) {
            int temp = target - numbers[i];
            int low = i + 1;
            int high = n - 1;
            while(low <= high) {
                int mid = low + (high - low)/2;
                if(numbers[mid] == temp) return {i+1, mid+1};
                else if(numbers[mid] > temp) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
        }
        return {};
    }
};