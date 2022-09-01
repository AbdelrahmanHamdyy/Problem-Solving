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
	ll count = 0;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		if (s == "Tetrahedron")
			count += 4;
		else if (s == "Cube")
			count += 6;
		else if (s == "Octahedron")
			count += 8;
		else if (s == "Dodecahedron")
			count += 12;
		else
			count += 20;
	}
	cout << count;
}

int main() {
	fast;
	// ll t; cin >> t;
	// while (t--)
	solve();
	return 0;
}