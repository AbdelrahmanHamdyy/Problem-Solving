class Solution {
public:
    int lengthOfLongestSubstring(string& s) {
        unordered_set<char> st;
        int ans = 0, i = 0, j = 0, n = s.size();
        while (j < n){
            while (st.find(s[j]) != st.end()) {
                st.erase(s[i]);
                i++;
            }
            ans = max(ans, j - i + 1);
            st.insert(s[j]);
            j++;
        }
        return ans;
    }
};