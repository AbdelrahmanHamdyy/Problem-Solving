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
	string s; cin >> s;
	int count = 0, MAX = 0;
	int words = 0;
	bool start = isalpha(s[0]) ? true : false;
	int len = sz(s);
	for (int i = 0; i < len; i++) {
		if (start && isalpha(s[i]))
			count++;
		if (start && (s[i] == '_' || s[i] == '(')) {
			if (count > MAX)
				MAX = count;
			start = false;
			count = 0;
		}
		if (s[i] == '(') {
			start = false;
			while (s[i] != ')') {
				i++;
				if (isalpha(s[i])) start = true;
				if (start && !isalpha(s[i])) {
					words++;
					start = false;
				}
			}
		}
		if (i == len - 1) {
			if (isalpha(s[i]))
				if (count > MAX)
					MAX = count;
		}
		else if ((s[i] == '_' || s[i] == ')') && isalpha(s[i + 1]))
			start = true;
	}
	cout << MAX << " " << words;
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
		solve();
	return 0;
}