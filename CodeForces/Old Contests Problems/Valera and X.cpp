#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define cin(v) for (int i = 0; i < v.size(); i++) cin >> v[i];
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<string> vs;

ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}

bool checkId(vc& v) {
	for (int i = 0; i < sz(v) - 1; i++)
		if (v[i] != v[i + 1])
			return false;
	return true;
}

int main() {
	fast;
	// Code
	// ll t; cin >> t;
	// vs print;
	vl print;
	// while (t--)
	ll n; cin >> n;
	vector<vector<char>> v(n, vector<char>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> v[i][j];
	bool flag = true;
	vc diag; vc other;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j || (i + j) == n - 1)
				diag.push_back(v[i][j]);
			else
				other.push_back(v[i][j]);
		}
	}
	if (!checkId(diag) || !checkId(other) || find(all(other), diag[0]) != other.end()) flag = false;
	if (flag) cout << "YES";
	else cout << "NO";
	return 0;
}