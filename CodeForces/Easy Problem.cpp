#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;

ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}

int main() {
	fast;
	// Code
	ll t; cin >> t;
	vs print;
	while (t--) {
		string s; cin >> s;
		sort(all(s));
		map<char, int> mp;
		bool cont = true;
		for (auto c : s) {
			if (mp[c] > 0) {
				print.push_back("No");
				cont = false;
				break;
			}
			mp[c]++;
		}
		if (cont) {
			for (int i = 0; i < sz(s) - 1; i++) {
				if (s[i + 1] - s[i] != 1) {
					print.push_back("No");
					cont = false;
					break;
				}
			}
		}
		if (cont) print.push_back("Yes");
	}
	for (auto i : print)
		cout << i << endl;
	return 0;
}