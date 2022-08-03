#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	string s; cin >> s;
	for (int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
	int vowels[6] = { 'a', 'e', 'i', 'o', 'u', 'y' };
	for (int i = 0; i < 6; i++)
		s.erase(remove(s.begin(), s.end(), vowels[i]), s.end());
	for (int i = 0; i < s.size(); i += 2)
		s.insert(i, ".");
	cout << s;
	return 0;
}