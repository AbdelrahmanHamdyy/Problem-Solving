class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> v(26);
        int maxf = 0, i = 0, j = 0, ans = 0, n = s.size();
        
        while (j < n) {
            v[s[j] - 'A']++;
            maxf = max(maxf, v[s[j] - 'A']);
            if (j - i + 1 - maxf > k) {
                v[s[i] - 'A']--;
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }

        return ans;
    }
};