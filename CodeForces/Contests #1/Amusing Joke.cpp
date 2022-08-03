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
	string s1, s2, r; cin >> s1 >> s2 >> r;
	int total = s1.size() + s2.size();
	bool flag = true;
	if (r.size() != total)
		flag = false;
	map<char, int> mp;
	for (int i = 0; i < s1.size(); i++)
		mp[s1[i]]++;
	for (int i = 0; i < s2.size(); i++)
		mp[s2[i]]++;
	map<char, int> mpr;
	for (int i = 0; i < r.size(); i++)
		mpr[r[i]]++;
	if (mp != mpr)
		flag = false;
	if (flag)
		cout << "YES";
	else
		cout << "NO";	
	return 0;
}