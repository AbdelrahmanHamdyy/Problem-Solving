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

ll n;
ll c;
void solve() {
	cin >> n;
	c = 0;
	c += (n / 100);
	n %= 100;
	if (n == 0)
		return;
	c += (n / 20);
	n %= 20;
	if (n == 0)
		return;
	c += (n / 10);
	n %= 10;
	if (n == 0)
		return;
	c += (n / 5);
	n %= 5;
	if (n == 0)
		return;
	c += (n / 1);
	n %= 1;
	if (n == 0)
		return;
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
		solve();
		cout << c;
	return 0;
}