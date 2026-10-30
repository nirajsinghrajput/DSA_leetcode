class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minm = prices[0];
        int profit = 0;

        for(int i = 1; i < prices.size(); i++) {
            int p = prices[i] - minm;

            profit = max(profit, p);

            minm = min(minm, prices[i]);
        }

        return profit;
    }
};