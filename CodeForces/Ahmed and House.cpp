#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	fast;
	// Code
	int a, b; cin >> a >> b;
	int x1, y1; cin >> x1 >> y1;
	int x2, y2; cin >> x2 >> y2;
	bool flag = false;
	if (a - x1 - x2 >= 0 && b - max(y1, y2) >= 0)
		flag = true;
	else if (a - x1 - y2 >= 0 && b - max(y1, x2) >= 0)
		flag = true;
	else if (a - y1 - x2 >= 0 && b - max(x1, y2) >= 0)
		flag = true;
	else if (a - y1 - y2 >= 0 && b - max(x1, x2) >= 0)
		flag = true;
	else if (a - max(y1, y2) >= 0 && b - x1 - x2 >= 0)
		flag = true;
	else if (a - max(y1, x2) >= 0 && b - x1 - y2 >= 0)
		flag = true;
	else if (a - max(x1, y2) >= 0 && b - y1 - x2 >= 0)
		flag = true;
	else if (a - max(x1, x2) >= 0 && b - y1 - y2 >= 0)
		flag = true;

	if (flag)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}