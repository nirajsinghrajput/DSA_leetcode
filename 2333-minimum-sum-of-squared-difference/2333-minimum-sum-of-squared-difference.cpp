class Solution {
public:
    // long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
    //     vector<int> diff;

    //     for(int i = 0; i < nums1.size(); i++) {
    //         diff.push_back(abs(nums1[i] - nums2[i]));
    //     }

    //     sort(diff.begin(), diff.end(), greater<int>());

    //     int ops = k1 + k2;
    //     while(ops > 0) {
            

    //         int cnt = 1;
    //         while (cnt < diff.size() && diff[cnt] == diff[0]) {
    //             cnt++;
    //         }
    //         long long cost = 0;
    //         if(diff[0] != diff[diff.size()-1]) {
    //             cost = 1LL * (diff[0] - diff[cnt])* cnt;
    //         }
    //         else {
    //             cost = 1LL * diff[0] * cnt;
    //         }
            
    //         int q = ops/cnt;
    //         int r = ops % cnt;
    //         if(ops < cost){
                
                
    //             while(cnt > 0) {
    //                 diff[cnt-1] -= q;
    //                 if(r > 0) {
    //                     diff[cnt-1] -= 1;
    //                     r--;
    //                 }
    //                 cnt--;
    //             }
    //             break;
    //         }
    //         else {
    //             if(diff[0] == diff[diff.size()-1]) {
    //                 return 0;
    //             }
    //             int x = diff[0] - diff[cnt];
    //             while(cnt > 0) {
    //                 diff[cnt-1] -= x;
    //                 cnt--;
    //             }
    //             ops -= cost;
    //         }
            
    //     }

    //     long long sum = 0;
    //     for(int i = 0; i < diff.size(); i++) {
    //         sum += 1LL * diff[i]*diff[i];
    //     }
    //     return sum;
    // }

    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        int ops = k1 + k2;

        vector<int> freq(100001, 0);
        int mx = 0;

        for (int i = 0; i < n; i++) {
            int d = abs(nums1[i] - nums2[i]);
            freq[d]++;
            mx = max(mx, d);
        }

        for (int d = mx; d > 0 && ops > 0; d--) {
            int take = min(ops, freq[d]);

            freq[d] -= take;
            freq[d - 1] += take;
            ops -= take;
        }

        if (ops > 0) {
            // All differences are zero; extra operations do nothing.
            return 0;
        }

        long long ans = 0;

        for (int d = 1; d <= mx; d++) {
            ans += 1LL * d * d * freq[d];
        }

        return ans;
    }
};