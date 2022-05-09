#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	string s; cin >> s;
	bool allUpper = true;
	for (int i = 0; i < s.size(); i++) {
		if (islower(s[i]))
			allUpper = false;
	}
	bool other = true;
	if (isupper(s[0]))
		other = false;
	for (int i = 1; i < s.size(); i++)
		if (islower(s[i]))
			other = false;
	if (other) {
		s[0] = toupper(s[0]);
		for (int i = 1; i < s.size(); i++)
			s[i] = tolower(s[i]);
	}
	else if (allUpper) {
		for (int i = 0; i < s.size(); i++)
			s[i] = tolower(s[i]);
	}
	cout << s;
	return 0;
}