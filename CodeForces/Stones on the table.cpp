#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	int count = 0;
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] == s[i + 1])
			count++;
	}
	cout << count << endl;
	return 0;
}