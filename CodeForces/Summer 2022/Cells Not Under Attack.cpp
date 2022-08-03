#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define cin(v) for (int i = 0; i < sz(v); i++) cin >> v[i];
#define cout(v) for (auto i : v) cout << i << endl;
constexpr double pi = 3.14159265358979323846;

typedef long long ll;
typedef unsigned long long usll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<string> vs;

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
	/* ll n, m; cin >> n >> m;
	ll count = n * n;
	map<pair<ll, ll>, bool> mp;
	for (ll i = 0; i < m; i++) {
		ll x, y; cin >> x >> y;
		if (!mp[{x, y}]) {
			mp[{x, y}] = true;
			count--;
		}
		for (ll j = 1; j <= n; j++) {
			if (j != y && !mp[{x, j}]) {
				mp[{x, j}] = true;
				count--;
			}
		}
		for (ll j = 1; j <= n; j++) {
			if (j != x && !mp[{j, y}]) {
				mp[{j, y}] = true;
				count--;
			}
		}
		if (i != m - 1)
			cout << count << " ";
		else
			cout << count << endl;
	} */
	ll n, m; cin >> n >> m;
	vector<bool> r(100000, false);
	vector<bool> c(100000, false);
	ll r_cnt = 0, c_cnt = 0;
	for (ll i = 1; i <= m; i++) {
		ll x, y; cin >> x >> y;
		if (!r[x]) r_cnt++;
		if (!c[y]) c_cnt++;
		r[x] = true;
		c[y] = true;
		// cout << (n - r_cnt) * (n - c_cnt) << " ";
		cout << (n * n) - ((r_cnt * n) + (c_cnt * n) - (r_cnt * c_cnt)) << " ";
	}
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
		solve();
	return 0;
}