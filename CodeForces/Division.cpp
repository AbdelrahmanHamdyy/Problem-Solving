#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	int t; int n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		if (n >= 1900)
			cout << "Division 1" << endl;
		else if (n >= 1600 && n <= 1899)
			cout << "Division 2" << endl;
		else if (n >= 1400 && n <= 1599)
			cout << "Division 3" << endl;
		else
			cout << "Division 4" << endl;

	}
	return 0;
}