class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int left = 0, right = n - 1;

        while (left < right) {
            int l = numbers[left], r = numbers[right];
            if (l + r == target) return {left + 1, right + 1};
            else if (l + r < target) left++;
            else if (l + r > target) right--;
        }

        return {};
    }
};