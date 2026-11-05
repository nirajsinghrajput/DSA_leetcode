class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int m = arr1.size();
        int n = arr2.size();

        sort(arr2.begin(), arr2.end());

        int count = m;
        for(int i = 0; i < m; i++) {
            int left = 0, right = n - 1;
            while(left <= right) {
                int mid = left + (right - left)/2;
                if(abs(arr2[mid] - arr1[i]) <= d) {
                    count--;
                    break;
                }
                else if(arr1[i] - arr2[mid] > d) {
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
        }

        return count;
    }
};