#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	int n, k; cin >> n >> k;
	string letters = "abcdefghijklmnopqrstuvwxyz";
	string s = "";
	for (int i = 0; i < n; i++)
		s += letters[i % k];
	cout << s;
	return 0;
}