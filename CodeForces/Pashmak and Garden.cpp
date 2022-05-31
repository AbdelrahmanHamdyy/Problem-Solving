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
	int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
	int x3, y3, x4, y4;
	if (x1 != x2 && y1 != y2)
		if (abs(x2 - x1) != abs(y2 - y1))
		{
			cout << -1;
			return;
		}
	if (x1 == x2) {
		x3 = x1 + abs(y2 - y1);
		y3 = y1;
		x4 = x1 + abs(y2 - y1);
		y4 = y2;
	}
	else if (y1 == y2) {
		x3 = x1;
		y3 = y1 + abs(x2 - x1);
		x4 = x2;
		y4 = y2 + abs(x2 - x1);
	}
	else {
		x3 = x1;
		y3 = y2;
		x4 = x2;
		y4 = y1;
	}
	cout << x3 << " " << y3 << " " << x4 << " " << y4;
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
		solve();
	return 0;
}