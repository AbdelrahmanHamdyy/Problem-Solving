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

void print(vl& v) {
	int len = sz(v);
	for (int i = 0; i < len; i++) {
		if (i < len - 1) cout << v[i] << " ";
		else cout << v[i];
	}
	cout << endl;
}

void solve() {
	int n, k; cin >> n >> k;
	vl v(n); cin(v);
	if (n == k) {
		cout << 0 << endl;
		return;
	}
	vl temp = v;
	sort(all(temp));
	ll s1 = 0, s2 = 0;
	for (int i = 0; i < k; i++) {
		s1 += v[i];
		s2 += temp[i];
	}
	if (s1 == s2) {
		cout << 0 << endl;
		return;
	}
	for (int i = 0; i < n - k; i++) {
		v.pop_back();
		temp.pop_back();
	}
	ll c = 0;
	for (int i = 0; i < k; i++) {
		if (find(all(v), temp[i]) == v.end())
			c++;
	}
	cout << c << endl;
}

int main() {
	fast;
	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}