#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	ll n, m, a;
	cin >> n >> m >> a;
	ll r = n / a;
	ll c = m / a;
	if (n % a != 0)
		r++;
	if (m % a != 0)
		c++;
	cout << r * c << endl;
	return 0;
}