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
	ll n25 = 0, n50 = 0;
	bool f = true;
	for (ll i = 0; i < n; i++) {
		ll paid; cin >> paid;
		if (paid == 25)
			n25++;
		else if (paid == 50 && n25 != 0) {
			n50++;
			n25--;
		}
		else if (paid == 100 && n25 != 0 && n50 != 0)
		{
			n25--;
			n50--;
		}
		else if (paid == 100 && n25 >= 3)
			n25 -= 3;
		else {
			f = false;
			break;
		}
	}
	if (f) cout << "YES";
	else cout << "NO";
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
		solve();
	return 0;
}