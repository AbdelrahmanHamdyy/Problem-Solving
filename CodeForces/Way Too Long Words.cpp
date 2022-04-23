#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	int n; cin >> n;
	vector<string> s(n);
	for (auto &it : s)
		cin >> it;
	for (int i = 0; i < n; i++) {
		if (s[i].size() <= 10)
			cout << s[i] << endl;
		else
			cout << s[i][0] << s[i].size() - 2 << s[i][s[i].size() - 1] << endl;
	}
	return 0;
}