#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
typedef long long ll;
typedef vector<int> vi;

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
	vi print;
	while (t--) {
		ll n; cin >> n;
		if (n % 2 == 0)
			print.push_back((n / 2) - 1);
		else
			print.push_back(n / 2);
	}
	for (auto i : print)
		cout << i << endl;
	return 0;
}