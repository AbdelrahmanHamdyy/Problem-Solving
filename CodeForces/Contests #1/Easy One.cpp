#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
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
	freopen("max-pair.in", "r", stdin);
	ifstream file("max-pair.in");
	ll t;
	if (file.is_open()) {
		file >> t;
	}
	//vs print;
	vl print;
	while (t--) {
		string s; file >> s;
		ll j;
		ll ans = 0;
		for (ll i = 0; i < sz(s) - 1; i++) {
			j = sz(s) - 1;
			while (s[i] == s[j] && j > 0)
				j--;
			ans = max(ans, j - i);
		}
		print.push_back(ans);
	}
	for (auto i : print)
		cout << i << endl;
	return 0;
}