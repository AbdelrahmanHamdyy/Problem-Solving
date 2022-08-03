#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
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
	ll t; cin >> t;
	//vs print;
	vl print;
	while (t--) {
		vl v(5);
		for (int i = 0; i < 5; i++)
			cin >> v[i];
		sort(all(v));
		print.push_back(v[sz(v) - 1] * v[sz(v) - 2]);
	}
	for (auto i : print)
		cout << i << endl;
	return 0;
}