#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	fast;
	// Code
	int n, m, k;
	cin >> n >> m >> k;
	if (m >= n && k >= n)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}