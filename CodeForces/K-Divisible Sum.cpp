#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	ll t, n, k; cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> k;
		ll f = (n + k - 1) / k;
		k *= f;
		ll result = (k + n - 1) / n;
		cout << result << endl;;
	}
	return 0;
}