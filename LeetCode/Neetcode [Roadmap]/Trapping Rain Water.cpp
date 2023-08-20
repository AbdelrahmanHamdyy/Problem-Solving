class Solution {
public:
    int trap(vector<int>& v) {
        int n = v.size();
        int lmax = v[0], rmax = v[n - 1];
        int l = 1, r = n-2;
        int ans = 0;
        while(l <= r)
        {
            if (v[l] >= lmax) { lmax = v[l]; l++; }
            else if (v[r] >= rmax) { rmax = v[r]; r--; }
            else if (lmax <= rmax && v[l] < lmax) { ans += lmax - v[l]; l++; }
            else { ans += rmax - v[r]; r--; }
        }
        return ans;
    }
};