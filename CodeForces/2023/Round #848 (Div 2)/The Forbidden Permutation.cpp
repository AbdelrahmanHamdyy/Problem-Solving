#include <bits/stdc++.h>
#include <unordered_map>
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
	ll n, m, d; cin >> n >> m >> d;
	vl v(n), a(m);
	unordered_map<ll, ll> mp;
	for (ll i = 0; i < n; i++) {
		ll x; cin >> x;
		mp[x] = i;
	}
	cin(a);
	ll ans = LLONG_MAX;
	for (ll i = 0; i < m - 1; i++) {
		if (mp[a[i]] >= mp[a[i + 1]] || mp[a[i + 1]] > mp[a[i]] + d) { // Good
			ans = 0;
			break;
		}
		else {
			ll r = mp[a[i + 1]] - mp[a[i]];
			ans = min(ans, r);
			if (mp[a[i]] - 1 + n - mp[a[i + 1]] >= d - r + 1) ans = min(ans, d - r + 1);
		}
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