#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	ll n, k; cin >> n >> k;
	ll count = 0;
	for (int i = 0; i < n; i++) {
		char op; ll x; cin >> op >> x;
		if (op == '+')
			k += x;
		else {
			if (x > k)
				count++;
			else
				k -= x;
		}
	}
	cout << k << " " << count;
	return 0;
}