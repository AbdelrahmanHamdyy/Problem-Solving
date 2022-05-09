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
	ll x, y, z; cin >> x >> y >> z;
	ll count = 0;
	x /= 2;
	while (z > 0 && (x >= 0 || y >= 0)) {
		z--;
		x--;
		if (x >= 0)
			count++;
		else
			z++;
		if (z > 0) {
			z--;
			y--;
			if (z >= 0) {
				if (y >= 0)
					count++;
				else
					z++;
			}
			else
				z++;
		}
		
	}
	cout << count;
}

int main() {
	fast;
	//ll t; cin >> t;
	//while (t--)
	solve();
	//cout(p);
	return 0;
}