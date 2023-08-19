class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int maxLength = 1;
        int len = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] - nums[i - 1] == 1) len++;
            else if (nums[i] == nums[i - 1]) continue;
            else {
                if (len > maxLength) maxLength = len;
                len = 1;
            }
        }
        if (len > maxLength) maxLength = len;
        return maxLength;
    }
};