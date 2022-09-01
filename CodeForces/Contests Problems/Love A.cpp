#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	string s; cin >> s;
	int a = 0;
	int size = s.size();
	for (auto i : s) {
		if (i == 'a')
			a++;
	}
	if (a > (s.size() + 1) / 2)
		cout << s.size();
	else
		cout << (2 * a - 1);
	return 0;
}