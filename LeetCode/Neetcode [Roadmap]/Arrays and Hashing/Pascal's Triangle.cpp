class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans = {{1}};
        if (n > 1) ans.push_back({1, 1}); else return ans;
        vector<int> v = {1, 1};
        for (int i = 0; i < n - 2; i++) {
            vector<int> c = {1};
            for (int j = 0; j < v.size(); j++)
                if (j + 1 < v.size()) c.push_back(v[j] + v[j + 1]);
            c.push_back(1);
            ans.push_back(c);
            v = c;
        }
        return ans;
    }
};