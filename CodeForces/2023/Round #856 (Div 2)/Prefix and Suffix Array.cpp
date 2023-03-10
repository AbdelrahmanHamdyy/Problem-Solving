#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define cin(v) for (int i = 0; i < sz(v); i++) cin >> v[i];
#define cout(v) for (auto i : v) cout << i << " ";
constexpr double pi = 3.14159265358979323846;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef set<int> si;

vl prime_factors(ll n) {
	vl primes;
	for (ll i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			primes.push_back(i);
			n /= i;
		}
	}
	if (n > 1)
		primes.push_back(n);
	return primes;
}

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

ll countDigits(ll n) {
	ll ans = 0;
	while (n) {
		ans++;
		n /= 10;
	}
	return ans;
}

void print(vl& v) {
	ll len = sz(v);
	for (ll i = 0; i < len; i++) {
		if (i < len - 1) cout << v[i] << " ";
		else cout << v[i];
	}
	cout << endl;
}

void solve() {
	ll n; cin >> n;
	vs v;
	for (ll i = 0; i < (2 * n) - 2; i++) {
		string s; cin >> s;
		if (sz(s) == n - 1) v.push_back(s);
	}
	reverse(all(v[0]));
	if (v[0] == v[1]) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	fast;
	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}