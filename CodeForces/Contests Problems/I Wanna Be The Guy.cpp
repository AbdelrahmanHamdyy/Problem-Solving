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

void solve() {
	int n; cin >> n;
	int p; cin >> p;
	vi littleP(p); cin(littleP);
	int q; cin >> q;
	vi littleQ(q); cin(littleQ);
	map<int, int> mp;
	for (int i = 0; i < p; i++)
		mp[littleP[i]]++;
	for (int i = 0; i < q; i++)
		mp[littleQ[i]]++;
	bool pass = true;
	for (int i = 1; i <= n; i++) {
		if (mp[i] == 0) {
			pass = false;
			break;
		}
	}
	if (pass) cout << "I become the guy.";
	else cout << "Oh, my keyboard!";
}

int main() {
	fast;
	// ll t; cin >> t;
	// vs p;
	// vl p;
	// while (t--)
	solve();
	return 0;
}