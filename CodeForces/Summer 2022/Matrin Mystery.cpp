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
ll fact(ll n) {
	if (n == 0)
		return 1;
	for (int i = n - 1; i > 1; i--)
		n *= i;
	return n;
}

void solve() {
	/* ll n; cin >> n;
	cout << ceil(n / 2.0);
	ll l, r, x; cin >> l >> r >> x;
	ll count = 0;
	for (ll i = l; i <= r; i++) {
		if ((i % x == 0))
			count++;
	}
	cout << count; */
	int n; cin >> n;
	ll x, y;
	ll x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	double slope = double(y2 - y1) / (x2 - x1);
	n -= 2;
	while (n--) {
		cin >> x >> y;
		if (double(y - y2) / (x - x2) != slope) {
			cout << "NO";
			return;
		}
	}
	cout << "YES";
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
		solve();
	return 0;
}