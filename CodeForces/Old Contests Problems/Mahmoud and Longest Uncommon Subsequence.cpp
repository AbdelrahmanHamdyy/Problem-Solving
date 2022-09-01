#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	fast;
	// Code
	string s1, s2; cin >> s1 >> s2;
	if (s1.size() != s2.size())
		cout << max(s1.size(), s2.size());
	else {
		int n = s1.size();
		bool flag = false;
		for (int i = 0; i < n; i++) {
			if (s1[i] != s2[i]) {
				flag = true;
				break;
			}
		}
		if (flag)
			cout << max(s1.size(), s2.size());
		else
			cout << "-1";
	}
	return 0;
}