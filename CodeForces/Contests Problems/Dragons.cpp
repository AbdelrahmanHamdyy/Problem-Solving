#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	int s, n; cin >> s >> n;
	vector<pair<int, int>> sb(n);
	for (int i = 0; i < n; i++) {
		cin >> sb[i].first >> sb[i].second;
	}
	sort(sb.begin(), sb.end());
	bool flag = 1;
	for (int i = 0; i < n; i++) {
		if (s > sb[i].first)
			s += sb[i].second;
		else {
			flag = 0;
			break;
		}
	}
	if (flag) cout << "YES";
	else cout << "NO";
	return 0;
}