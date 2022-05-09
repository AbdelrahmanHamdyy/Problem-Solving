#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define cin(v) for (int i = 0; i < v.size(); i++) cin >> v[i];
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;

ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}

int main() {
	fast;
	// Code
	// ll t; cin >> t;
	// vs print;
	vl print;
	// while (t--)
	int n; cin >> n;
	vl v(n); cin(v);
	if (n == 1) {
		if (v[0] == 0)
			cout << "UP";
		else if (v[0] == 15)
			cout << "DOWN";
		else
			cout << -1;
	}
	else {
		if (v[sz(v) - 1] == 0)
			cout << "UP";
		else if (v[sz(v) - 1] == 15)
			cout << "DOWN";
		else if (v[sz(v) - 1] > v[sz(v) - 2])
			cout << "UP";
		else if (v[sz(v) - 1] < v[sz(v) - 2])
			cout << "DOWN";
		else
			cout << -1;
	}
	return 0;
}