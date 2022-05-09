#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;

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
	//vs print;
	vl print;
	//while (t--)
	string s; cin >> s;
	int i = 0, j = sz(s) - 1;
	while (i < j) {
		s[j] = s[i];
		i++; j--;
	}
	cout << s;
	return 0;
}