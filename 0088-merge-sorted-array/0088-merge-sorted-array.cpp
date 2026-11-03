class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merged_array;

        int i = 0, j = 0;

        while(i < m && j < n) {
            if(nums1[i] <= nums2[j]) {
                merged_array.push_back(nums1[i++]);
            }
            else {
                merged_array.push_back(nums2[j++]);
            }
        }

        while(i < m) {
            merged_array.push_back(nums1[i++]);
        }

        while(j < n) {
            merged_array.push_back(nums2[j++]);
        }

        nums1 = merged_array;
    }
};