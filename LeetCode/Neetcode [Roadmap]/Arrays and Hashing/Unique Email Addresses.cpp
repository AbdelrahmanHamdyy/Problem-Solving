class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> s;
        int n = emails.size();
        for (int i = 0; i < n; i++) {
            string s1 = "", s2 = "";
            int j;
            for (int k = 0; k < emails[i].size(); k++) {
                if (emails[i][k] == '@') { j = k + 1; break; }
                s1 += emails[i][k];
            }
            for (int k = j; k < emails[i].size(); k++) {
                if (emails[i].substr(k + 1) == "com") break;
                s2 += emails[i][k];
            }
            s1.erase(remove(s1.begin(), s1.end(), '.'), s1.end());
            if (s1.find('+') != string::npos) {
                s1 = s1.substr(0, s1.find('+'));
            }
            string res = s1 + "@" + s2 + ".com";
            cout << res << endl;
            s.insert(res);
        }
        return s.size();
    }
};