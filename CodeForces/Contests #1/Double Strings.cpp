#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define cin(v) for (int i = 0; i < sz(v); i++) cin >> v[i];
#define cout(v) for (auto i : v) cout << i << endl;
constexpr double pi = 3.14159265358979323846;

typedef long long ll;
typedef unsigned long long usll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<bool> vb;

ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}
ll fact(ll n) {
	if (n == 0)
		return 1;
	for (ll i = n - 1; i > 1; i--)
		n *= i;
	return n;
}

void solve() {
	int n; cin >> n;
	map<string, bool> mp;
	vs v(n);
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		mp[s] = true;
		v[i] = s;
	}
	string res = "";
	for (int i = 0; i < n; i++) {
		bool flag = false;
		int l = sz(v[i]);
		if (l > 1) {
			for (int j = 0; j < l - 1; j++) {
				string s1 = v[i].substr(0, j + 1);
				string s2 = v[i].substr(j + 1);
				if (mp[s1] && mp[s2]) {
					flag = true;
					break;
				}
			}
		}
		if (flag) res += '1';
		else res += '0';
	}
	cout << res << endl;
}

int main() {
	fast;
	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}