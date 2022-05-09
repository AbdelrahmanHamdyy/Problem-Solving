#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define cin(v) for (int i = 0; i < v.size(); i++) cin >> v[i];
#define cout(v) for (auto i : v) cout << i << endl;

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

// vs p;
// vl p;

void solve() {
	ll n; cin >> n;
	vl v(n); cin(v);
	ll m; cin >> m;
	for (ll i = 0; i < m; i++) {
		ll a, b; cin >> a >> b; a--;
		ll left = b - 1;
		ll right = v[a] - b;
		v[a] = 0;
		if (a - 1 >= 0) v[a - 1] += left;
		if (a + 1 < n) v[a + 1] += right;
	}
	cout(v);
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
		solve();
	return 0;
}