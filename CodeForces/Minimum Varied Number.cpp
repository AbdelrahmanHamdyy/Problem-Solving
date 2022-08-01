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
	/* int n, H, M; cin >> n >> H >> M;
	int a1 = 0, a2 = 0;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
	sort(all(v));
	if (v[0].first > H) {
		a1 = v[0].first - H;
		if (v[0].second < M) {
			a2 = (v[0].second - M + 60);
			a1--;
		}
		else a2 = v[0].second - M;
	}
	else {
		if (v[0].first == H && v[0].second >= M) {
			a1 = 0;
			a2 = v[0].second - M;
		}
		else {
			a1 = 24 - H;
			if (M > 0) {
				a1--;
				a2 = (0 - M) + 60;
			}
			else a2 = 0;
			a1 += v[0].first;
			a2 += v[0].second;
			if (a2 > 60) { a2 -= 60; a1++; }
		}
	}
	cout << a1 << " " << a2 << endl; */
	int s; cin >> s;
	vi v;
	if (s <= 9) {
		cout << s << endl;
		return;
	}
	int digit = 9;
	while (s > 0) {
		s -= digit;
		if (s >= 0) v.push_back(digit);
		digit--;
	}
	if (s < 0) {
		digit += (s + 1);
		v.push_back(digit);
	}
	int len = sz(v);
	for (int i = len - 1; i >= 0; i--)
		cout << v[i];
	cout << endl;
}

int main() {
	fast;
	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}