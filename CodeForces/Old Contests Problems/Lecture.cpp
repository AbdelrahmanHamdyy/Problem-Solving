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
	map<string, string> mp;
	vector<string> p;
	int n, m; cin >> n >> m;
	vector<string> v(n);
	for (int i = 0; i < m; i++) {
		string s1, s2; cin >> s1 >> s2;
		mp[s1] = s2;
	}
	for (int i = 0; i < n; i++) 
		cin >> v[i];
	for (auto s : v) {
		if (s.size() <= mp[s].size())
			p.push_back(s);
		else
			p.push_back(mp[s]);
	}
	for (auto s : p)
		cout << s << " ";
	return 0;
}