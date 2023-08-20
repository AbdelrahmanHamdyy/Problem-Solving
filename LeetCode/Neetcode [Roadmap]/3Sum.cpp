class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        set<vector<int>> s;
        vector<vector<int>> v;
        for (int i = 0; i < n; i++) {
            int j = i + 1, k = n - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0 && s.insert({nums[i], nums[j], nums[k]}).second)
                    v.push_back({nums[i], nums[j], nums[k]});
                if (sum > 0) k--;
                else if (sum < 0) j++;
                else { j++; k--; }
            }
        }
        return v;
    }
};