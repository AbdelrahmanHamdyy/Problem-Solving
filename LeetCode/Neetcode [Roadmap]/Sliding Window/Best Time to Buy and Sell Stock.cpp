class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ///////////////////// SLIDING WINDOW /////////////////////
        int n = prices.size();
        int l = INT_MAX, p = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            l = min(prices[i], l);
            ans = max(prices[i] - l, ans);
        }
        return ans;
    }
};