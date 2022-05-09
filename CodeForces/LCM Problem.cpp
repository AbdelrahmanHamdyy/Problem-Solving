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
	ll n; cin >> n;
	for (ll i = sqrt(n); i > 0; i--) {
		if (n % i == 0)
			if (lcm(n / i, i) == n)
			{
				cout << i << " " << n / i;
				break;
			}
	}
	return 0;
}