class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // INPUT: 1 2 3 4
        int n = nums.size();
        
        vector<int> ans(n);
        vector<int> lp(n, 1);
        vector<int> rp(n, 1);
        
        for(int i = 1; i < n; i++) lp[i] = lp[i - 1] * nums[i - 1];
        // LEFT PRODUCT: 1 1 2 6

        for(int i = n - 2; i >= 0; i--) rp[i] = rp[i + 1] * nums[i + 1];
        // RIGHT PRODUCT: 24 12 4 1

        for(int i = 0; i < n; i++) ans[i] = lp[i] * rp[i];
        
        return ans;
    }
};