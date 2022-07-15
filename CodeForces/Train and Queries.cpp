#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define cin(v) for (int i = 0; i < sz(v); i++) cin >> v[i];
#define cout(v) for (auto i : v) cout << i << endl;
constexpr int pi = 3.14159265358979323846;

typedef long long ll;
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

void solve() {
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		ll n, k; cin >> n >> k;
		map<int, vl> mp;
		for (ll x = 0; x < n; x++) {
			int in; cin >> in;
			mp[in].push_back(x);
		}
		for (ll j = 0; j < k; j++) {
			ll a, b; cin >> a >> b;
			if (mp[a].empty() || mp[b].empty()) {
				cout << "NO" << endl;
				continue;
			}
			if (mp[a][0] < mp[b][mp[b].size() - 1]) {
				cout << "YES" << endl;
				continue;
			}
			cout << "NO" << endl;
		}
	}
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
		solve();
	return 0;
}