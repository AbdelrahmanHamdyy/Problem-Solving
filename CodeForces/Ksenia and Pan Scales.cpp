#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define cin(v) for (int i = 0; i < sz(v); i++) cin >> v[i];
#define cout(v) for (auto i : v) cout << i << endl;

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

// vs p;
// vl p;

void solve() {
	string s1, s2, ss1, ss2; cin >> s1 >> s2;
	int d = s1.find('|');
	if (d != 0)
		ss1 = s1.substr(0, d);
	ss2 = s1.substr(d + 1, sz(s1) + 1);
	if ((ss1.size() + ss2.size() + s2.size()) % 2 != 0)
		cout << "Impossible";
	else
	{
		for (int i = 0; i < sz(s2); i++)
		{
			if (sz(ss1) == sz(ss2))
			{
				ss1 += s2[i];
				if (i != ss2.size() - 1) {
					i++;
					ss2 += s2[i];
				}
			}
			else
			{
				if (ss1.size() < ss2.size()) ss1 += s2[i];
				else ss2 += s2[i];
			}
		}
		if (ss1.size() == ss2.size()) cout << ss1 << "|" << ss2;
		else cout << "Impossible";
	}
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
	solve();
	return 0;
}