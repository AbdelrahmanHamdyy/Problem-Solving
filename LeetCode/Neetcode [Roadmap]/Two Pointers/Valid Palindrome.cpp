class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (auto c : s) {
            if (isalpha(c) || isdigit(c)) str += tolower(c);
        }
        int len = str.size();
        for (int i = 0; i < len / 2; i++)
            if (str[i] != str[len - 1 - i]) return false;
        return true;
    }
};