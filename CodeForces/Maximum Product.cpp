#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

ll rec(ll n) {
	if (n == 0)
		return 1;
	if (n < 10)
		return n;
	ll l = n % 10;
	return max(9 * rec(n / 10 - 1), l * rec(n / 10));
}

int main() {
	fast;
	// Code
	ll n; cin >> n;
	cout << rec(n);
	return 0;
}