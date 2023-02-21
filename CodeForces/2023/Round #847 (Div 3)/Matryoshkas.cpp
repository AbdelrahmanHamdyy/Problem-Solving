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

void print(vi& v) {
	int len = sz(v);
	for (int i = 0; i < len; i++) {
		if (i < len - 1) cout << v[i] << " ";
		else cout << v[i];
	}
	cout << endl;
}

void solve() {
	/* TIME LIMIT EXCEEDED 
	ll n; cin >> n;
	vl v(n); cin(v);
	vector<stack<ll>> m;
	sort(all(v));
	m.push_back({});
	ll j = 0;
	m[j].push(v[0]);
	for (ll i = 1; i < n; i++) {
		bool flag = false;
		for (auto &s : m) {
			if (v[i] - s.top() == 1) {
				s.push(v[i]);
				flag = true;
				break;
			}
		}
		if (!flag) {
			m.push_back({});
			m[sz(m) - 1].push(v[i]);
		}
	}
	cout << sz(m) << endl; */
	ll n; cin >> n;
	map<ll, ll> mp;
	for (int i = 0; i < n; i++) {
		ll a; cin >> a;
		mp[a]++;
	}
	ll lastFreq, lastElement;
	ll result = 0;
	bool flag = true;
	for (auto &i : mp) {
		if (flag) {
			result = i.second;
			flag = false;
		}
		else if (i.first - lastElement > 1)
			result += i.second;
		else if (lastFreq < i.second)
			result += (i.second - lastFreq);
		lastElement = i.first;
		lastFreq = i.second;
	}
	cout << result << endl;
}

int main() {
	fast;
	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}