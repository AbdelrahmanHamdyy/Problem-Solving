#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
typedef long long ll;
using namespace std;

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
	int t; cin >> t;
	vector<int> print;
	while (t--) {
		string s1, s2; cin >> s1 >> s2;
		map<char, int> mp;
		int count = 0;
		for (int i = 0; i < s1.size(); i++)
			mp[s1[i]]++;
		for (int i = 0; i < s2.size(); i++)
			mp[s2[i]]--;
		for (auto i : mp)
			count += abs(i.second);
		print.push_back(count);
	}
	for (auto i : print)
		cout << i << endl;
	return 0;
}