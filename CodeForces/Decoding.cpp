#include <bits/stdc++.h>
typedef long long ll;
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
	init;
	// Code
	int n; string s;
	cin >> n >> s;
	deque<char> d;
	bool front = n % 2 == 0 ? 0 : 1;
	for (auto c : s) {
		if (!front) d.push_front(c);
		else d.push_back(c);
		front ^= 1;
	}
	for (auto c : d) cout << c;
	return 0;
}