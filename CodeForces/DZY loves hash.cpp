#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	fast;
	// Code
	int p, n; cin >> p >> n;
	vector<int> v(n);
	for (int i = 0; i < v.size(); i++)
		cin >> v[i];
	vector<int> l;
	bool flag = false;
	int index = 0;
	for (int i = 0; i < v.size(); i++) {
		int loc = v[i] % p;
		if (find(l.begin(), l.end(), loc) != l.end()) {
			flag = true;
			index = i;
			break;
		}
		else
			l.push_back(loc);
	}
	if (flag)
		cout << index + 1;
	else
		cout << "-1";
	return 0;
}