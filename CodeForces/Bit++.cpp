#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	int n; cin >> n;
	int x = 0;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		if (s == "++X")
			++x;
		else if (s == "--X")
			--x;
		else if (s == "X++")
			x++;
		else
			x--;
	}
	cout << x;
	return 0;
}