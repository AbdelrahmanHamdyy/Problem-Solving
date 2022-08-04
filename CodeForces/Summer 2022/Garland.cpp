#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define cin(v) for (int i = 0; i < sz(v); i++) cin >> v[i];
#define cout(v) for (auto i : v) cout << i << " ";
constexpr double pi = 3.14159265358979323846;

typedef long long ll;
typedef unsigned long long usll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef set<int> si;

/* ll nCr(ll n, ll r)
{
	ll g, u = 1, d = 1;
	for (ll i = 0; i < r; ++i)
	{
		u = u * (n - i);
		d = d * (r - i);
		g = gcd(u, d);
		u /= g;
		d /= g;
	}
	return u;
} */

ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}
ll fact(ll n) {
	return n == 1 ? 1 : n * fact(n - 1);
}

void solve() {
	string s1, s2; cin >> s1 >> s2;
	int count = 0;
	map<char, int> mp1;
	map<char, int> mp2;
	for (auto c : s1) mp1[c]++;
	for (auto c : s2) mp2[c]++;
	for (auto& it : mp2) {
		if (!mp1[it.first]) {
			count = -1;
			break;
		}
		count += min(it.second, mp1[it.first]);
	}
	cout << count;
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
		solve();
	return 0;
}