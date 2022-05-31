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
	ll yellow, blue; cin >> yellow >> blue;
	ll y, g, b; cin >> y >> g >> b;
	ll count = 0;
	if (!(y > 0 && yellow >= (y * 2))) {
		count += ((y * 2) - yellow);
		yellow = 0;
	}
	else
		yellow = yellow - (2 * y);
	if (!(b > 0 && blue >= (b * 3))) {
		count += ((b * 3) - blue);
		blue = 0;
	}
	else
		blue = blue - (3 * b);
	if (g > 0) {
		if (!(g > 0 && (yellow >= g)))
			count += (g - yellow);
		if (!(g > 0 && (blue >= g)))
			count += (g - blue);
	}
	cout << count;
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
		solve();
	return 0;
}