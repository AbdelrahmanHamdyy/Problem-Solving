class Solution {
public:
    static bool cmp(pair<int,int> a, pair<int,int> b) {
        return b.second < a.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        vector<int> ans;

        for(auto i : nums) mp[i]++;

        vector<pair<int, int>> v(mp.begin(),mp.end());
        sort(v.begin(), v.end(), cmp);

        for(int i = 0; i < k; i++) ans.push_back(v[i].first);
        return ans;
    }
};