#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	string s, t;
	cin >> s >> t;
	int i = 0, j = 0;
	while (i < s.size()) 
	{
		if (j >= t.size())
			break;
		else if (s[i] == t[j])
			i++;
		j++;
	}
	cout << i + 1 << endl;
	return 0;
}