#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define cin(v) for (int i = 0; i < sz(v); i++) cin >> v[i];
#define cout(v) for (auto i : v) cout << i << " ";
constexpr double pi = 3.14159265358979323846;

typedef long long ll;
typedef unsigned long long usll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<bool> vb;

ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}
ll fact(ll n) {
	if (n == 0)
		return 1;
	for (ll i = n - 1; i > 1; i--)
		n *= i;
	return n;
}

void solve() {
	map<int, vi> mp;
	vector<pair<int, int>> v;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		mp[x].push_back(i);
	}
	for (auto &it : mp) {
		sort(all(it.second));
		int len = sz(it.second);
		if (len == 1) {
			v.push_back({ it.first, 0 });
			// cout << it.first << " " << 0 << endl;
			continue;
		}
		int d = it.second[1] - it.second[0];
		bool f = true;
		for (int i = 1; i < len - 1; i++) {
			if (it.second[i + 1] - it.second[i] != d) {
				f = false;
				break;
			}
		}
		if (f) v.push_back({ it.first, d });
	}
	cout << sz(v) << endl;
	for (int i = 0; i < sz(v); i++) cout << v[i].first << " " << v[i].second << endl;
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
		solve();
	return 0;
}