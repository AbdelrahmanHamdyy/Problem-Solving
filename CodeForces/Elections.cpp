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
	int a, b, c; cin >> a >> b >> c;
	vi v(3); v[0] = a; v[1] = b; v[2] = c;
	auto it = max_element(all(v));
	int m = *it;
	/* if (a == b && a == c && b == c)
		cout << "1 1 1" << endl;
	else {
		if (a == m)
			cout << m << " ";
		else
			cout << m + 1 - a << " ";
		if (b == m)
			cout << m << " ";
		else
			cout << m + 1 - b << " ";
		if (c == m)
			cout << m << " ";
		else
			cout << m + 1 - c << " ";
		cout << endl;
	} */
	cout << max(0, max(b, c) - a + 1) << " ";
	cout << max(0, max(a, c) - b + 1) << " ";
	cout << max(0, max(a, b) - c + 1) << endl;
}

int main() {
	fast;
	ll t; cin >> t;
	while (t--)
		solve();
	return 0;
}