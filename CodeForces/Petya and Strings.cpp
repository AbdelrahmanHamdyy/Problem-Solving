#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	char s1[1000], s2[1000];
	cin >> s1 >> s2;
	if (_strcmpi(s1, s2) > 0)
		cout << "1";
	else if (_strcmpi(s1, s2) < 0)
		cout << "-1";
	else
		cout << "0";
	return 0;
}