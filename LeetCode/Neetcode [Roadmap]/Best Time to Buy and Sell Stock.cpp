class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // vector<pair<int, int>> vp;
        // int n = prices.size();
        // for (int i = 0; i < n; i++) vp.push_back({prices[i], i});
        // sort(vp.begin(), vp.end());
        // int i = 0, j = n - 1;
        // while (i < j) {
        //     if (vp[j].second > vp[i].second) return vp[j].first - vp[i].first;
        //     else if (vp[j].first - vp[j - 1].first < vp[i + 1].first - vp[i].first) j--;
        //     else i++;
        // }
        // return 0;

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