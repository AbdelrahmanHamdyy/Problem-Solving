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
	/* int a, c, i = 0, b = 0; cin >> a >> c;
	while (a || c) {
		int d = (c % 3) - (a % 3);
		if (d < 0) 
			d += 3;
		b += (d * pow(3, i));
		i++;
		c /= 3;
		a /= 3;
	}
	cout << b; */
	ll a, c; cin >> a >> c;
	stack<int> s1, s2;
	ll res = 0;
	while (a != 0) {
		s1.push(a % 3);
		a /= 3;
	}
	while (c != 0) {
		s2.push(c % 3);
		c /= 3;
	}
	if (sz(s1) > sz(s2)) {
		while (sz(s2) < sz(s1))
			s2.push(0);
	}
	else if (sz(s1) < sz(s2)) {
		while (sz(s2) > sz(s1))
			s1.push(0);
	}
	while (!s1.empty()) {
		ll x = s1.top();
		ll y = s2.top();
		int d = y - x;
		if (d < 0) d += 3;
		res += d * pow(3, sz(s1) - 1);
		s1.pop(); s2.pop();
	}
	cout << res;
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
		solve();
	return 0;
}