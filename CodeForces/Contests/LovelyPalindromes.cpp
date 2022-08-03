#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	string s; cin >> s;
	cout << s;
	for (int i = s.size() - 1; i >= 0; i--)
		cout << s[i];
	return 0;
}