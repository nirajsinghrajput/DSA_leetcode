class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<pair<pair<int,int>, int>> sample;

        for (int i = 0; i < n; i++) {
            int val = 0, temp = nums[i];

            while (temp > 0) {
                val += temp % 10;
                temp /= 10;
            }

            sample.push_back({{val, nums[i]}, i});
        }

        sort(sample.begin(), sample.end());

        vector<bool> visited(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i] || sample[i].second == i)
                continue;

            int j = i, cycleSize = 0;

            while (!visited[j]) {
                visited[j] = true;
                j = sample[j].second;
                cycleSize++;
            }

            swaps += cycleSize - 1;
        }

        return swaps;
    }
};