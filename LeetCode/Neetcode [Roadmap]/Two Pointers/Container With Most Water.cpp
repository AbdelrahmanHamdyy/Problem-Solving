class Solution {
public:
    int maxArea(vector<int>& v) {
        int n = v.size();
        int m = 0, a = 0, i = 0, j = n - 1;
        while (i < j) {
            a = min(v[i], v[j]) * (j - i);
            m = max(a, m);
            if (v[i] <= v[j]) i++;
            else j--;
        }
        return m;
    }
};