#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define cin(v) for (int i = 0; i < sz(v); i++) cin >> v[i];
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
	unsigned long long int a, b, c, d; cin >> a >> b >> c >> d;
	for (int i = 0; i < 3; i++) {
		if (a + b * c == d || a - b * c == d) {
			cout << "YES";
			return;
		}
		if (a - b + c == d || a * b + c == d) {
			cout << "YES";
			return;
		}
		if (a + b - c == d || a * b - c == d) {
			cout << "YES";
			return;
		}
	}
	cout << "NO";
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
		solve();
	return 0;
}