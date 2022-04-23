#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	string s; cin >> s;
	int count = 0;
	while (s.size() > 1) {
		int sum = 0;
		for (int i = 0; i < s.size(); i++) {
			sum += (s[i] - '0');
		}
		s = to_string(sum);
		count++;
	}
	cout << count;
	return 0;
}