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
	ll n, k; cin >> n >> k;
	string str; cin >> str;
	if (n == 1 && k > 0)
		str = "0";
	else {
		ll size = str.size();
		for (int i = 0; i < size; i++) {
			if (k == 0)
				break;
			if (i == 0 && str[i] != '1' && k > 0) {
				str[i] = '1';
				k--;
			}
			else if (i > 0 && str[i] != '0' && k > 0) {
				str[i] = '0';
				k--;
			}
		}
	}
	cout << str;
	return 0;
}