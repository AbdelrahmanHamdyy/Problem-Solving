#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
typedef long long ll;
typedef vector<int> vi;

ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}

int main() {
	fast;
	// Code
	//ll t; cin >> t;
	vi print;
	// while (t--)
	string s; cin >> s;
	string msg = "hello";
	int index = 0;
	for (auto c : s) {
		if (c == msg[index] && index < 5)
			index++;
	}
	if (index < 5)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}