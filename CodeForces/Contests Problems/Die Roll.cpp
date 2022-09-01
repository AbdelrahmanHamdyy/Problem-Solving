#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	int a, b;
	cin >> a >> b;
	int m = 7 - max(a, b);
	if (m == 0)
		cout << "0/1";
	else if (m == 1)
		cout << "1/6";
	else if (m == 2)
		cout << "1/3";
	else if (m == 3)
		cout << "1/2";
	else if (m == 4)
		cout << "2/3";
	else if (m == 5)
		cout << "5/6";
	else if (m == 6)
		cout << "1/1";

	return 0;
}