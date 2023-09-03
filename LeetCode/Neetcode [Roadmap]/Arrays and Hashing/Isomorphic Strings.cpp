class Solution {
public:
bool isIsomorphic(string s, string t) {
	unordered_map<char, char>mappingFirstStr;
	unordered_map<char, char>mappingSecondStr;
	if (s.size() != t.size())
		return false;
	for (int i = 0; i < s.size(); i++) {
		if (!mappingFirstStr[t[i]]) {
			mappingFirstStr[t[i]] = s[i];
		}
		if (!mappingSecondStr[s[i]]) {
			mappingSecondStr[s[i]] = t[i];
		}
		if (mappingFirstStr[t[i]] != s[i])
			return false;
		if (mappingSecondStr[s[i]] != t[i])
			return false;
	}
	return true;
}
};