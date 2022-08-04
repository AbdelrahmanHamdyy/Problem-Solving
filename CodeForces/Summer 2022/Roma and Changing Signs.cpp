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
typedef set<int> si;

/* ll nCr(ll n, ll r)
{
	ll g, u = 1, d = 1;
	for (ll i = 0; i < r; ++i)
	{
		u = u * (n - i);
		d = d * (r - i);
		g = gcd(u, d);
		u /= g;
		d /= g;
	}
	return u;
} */

ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}
ll fact(ll n) {
	return n == 1 ? 1 : n * fact(n - 1);
}

ll getSum(vi& v) {
	int len = sz(v);
	ll sum = 0;
	for (int i = 0; i < len; i++) sum += v[i];
	return sum;
}

void solve() {
	int n, k; cin >> n >> k;
	vi v(n); cin(v);
	int moves = 0;
	for (int i = 0; i < n; i++) {
		if (moves >= k) break;
		if (v[i] < 0) { v[i] = -1 * v[i]; moves++; }
	}
	int l = k - moves;
	sort(all(v));
	ll sum = getSum(v);
	if (l == 0) cout << sum;
	else {
		if (l % 2 == 0) cout << sum;
		else cout << sum - (static_cast<long long>(2) *v[0]);
	}
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
		solve();
	return 0;
}