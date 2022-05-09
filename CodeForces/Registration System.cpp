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
	int n; cin >> n;
	vector<string> v(n);
	map<string, int> mp;
	vector<string> p;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		mp[v[i]]++;
		if (mp[v[i]] == 1)
			p.push_back("OK");
		else
			p.push_back(v[i] + to_string(mp[v[i]] - 1));
	}
	for (auto i : p)
		cout << i << endl;
	return 0;
}