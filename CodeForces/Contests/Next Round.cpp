#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	int n, k; cin >> n >> k;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] >= v[k - 1] && v[i] > 0)
			count++;
	}
	cout << count;
	return 0;
}