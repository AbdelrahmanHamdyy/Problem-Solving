#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	string s; getline(cin, s);
	vector<char> v;
	for (int i = 0; i < s.size(); i++) {
		if (isalpha(s[i]) && find(v.begin(), v.end(), s[i]) == v.end())
			v.push_back(s[i]);
	}
	cout << v.size()<< endl;
	return 0;
}