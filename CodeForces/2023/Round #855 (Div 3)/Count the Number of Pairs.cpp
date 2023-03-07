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

ll nCr(ll n, ll r) {
	ll g, u = 1, d = 1;
	for (ll i = 0; i < r; i++) {
		u = u * (n - i);
		d = d * (r - i);
		g = gcd(u, d);
		u /= g;
		d /= g;
	}
	return u;
}

bool isPrime(int n) {
	for (int i = 2; i < n; i++)
		if (n % i == 0) return false;
	return true;
}

int getFirstDivisor(int n) {
	for (int i = 2; i < n; i++)
		if (n % i == 0) return i;
}

int getSumOfDigits(int n) {
	int ans = 0;
	while (n) {
		ans += n % 10, n /= 10;
	}
	return ans;
}

void print(vl& v) {
	int len = sz(v);
	for (int i = 0; i < len; i++) {
		if (i < len - 1) cout << v[i] << " ";
		else cout << v[i];
	}
	cout << endl;
}

void solve() {
	ll n, k, ans = 0; cin >> n >> k;
	string s; cin >> s;
	map<char, ll> lowerCase;
	map<char, ll> upperCase;
	for (auto c : s) {
		if (islower(c)) { lowerCase[c]++; if (!upperCase[toupper(c)]) upperCase[toupper(c)] = 0; }
		else { upperCase[c]++; if (!lowerCase[tolower(c)]) lowerCase[tolower(c)] = 0; }
	}
	for (auto it = lowerCase.begin(); it != lowerCase.end(); it++) {
		ll c1 = it->second;
		ll c2 = upperCase[it->first - 32];
		if (c1 != c2) {
			ll val = ((c1 > c2) ? c2 : c1);
			while (k > 0 && abs(c1 - c2) >= 2 && (c1 > 1 || c2 > 1)) {
				(c1 > c2) ? c2++ : c1++;
				(c1 > c2) ? c1-- : c2--;
				val++;
				k--;
			}
			ans += val;
		}
		else
			ans += it->second;
	}
	cout << ans << endl;
}

int main() {
	fast;
	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}