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
	ll n; cin >> n;
	if (n == 1) {
		int x; cin >> x;
		if (x == 0) cout << 1;
		else cout << x;
		return;
	}
	vector<vl> v(n, vl(n));
	set<ll> s;
	ll r = 0, c = 0, sum = 0, t = 0;
	for (ll i = 0; i < n; i++) {
		sum = 0;
		bool found = false;
		for (ll j = 0; j < n; j++) {
			cin >> v[i][j];
			sum += v[i][j];
			if (v[i][j] == 0) {
				r = i;
				c = j;
				found = true;
			}
		}
		if (!found) {
			s.insert(sum);
			t = sum;
		}
	}
	if (sz(s) > 1) {
		cout << -1;
		return;
	}
	ll y = t;
	for (ll i = 0; i < n; i++)
		if (i != c) y -= v[r][i];
	if (y <= 0) {
		cout << -1;
		return;
	}
	v[r][c] = y;
	for (ll i = 0; i < n; i++) {
		sum = 0;
		for (ll j = 0; j < n; j++) {
			sum += v[j][i];
		}
		if (sum != t) {
			cout << -1;
			return;
		}
	}
	sum = 0;
	ll sum2 = 0;
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < n; j++) {
			if (i == j)
				sum += v[i][j];
			if (i + j == n - 1)
				sum2 += v[i][j];
		}
	}
	if (sum != t || sum2 != t) {
		cout << -1;
		return;
	}
	cout << y;
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
		solve();
	return 0;
}