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
	int n, H, M; cin >> n >> H >> M;
	int a1 = 0, a2 = 0;
	vector<pair<int, int>> v(n);
	pair<int, int> m = {INT_MAX, INT_MAX};
	for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
	for (int i = 0; i < n; i++) {
		if (v[i].first > H) {
			a1 = v[i].first - H;
			if (v[i].second < M) {
				a2 = (v[i].second - M + 60);
				a1--;
			}
			else a2 = v[i].second - M;
		}
		else {
			if (v[i].first == H && v[i].second >= M) {
				a1 = 0;
				a2 = v[i].second - M;
			}
			else {
				a1 = v[i].first - H + 24;
				if (v[i].second >= M) a2 = v[i].second - M;
				else { a2 = (v[i].second - M + 60); a1--; }
			}
		}
		if (a1 < m.first) {
			m.first = a1;
			m.second = a2;
		}
		else if (a1 == m.first) {
			if (a2 < m.second) {
				m.second = a2;
			}
		}
	}
	cout << m.first << " " << m.second << endl;
}

int main() {
	fast;
	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}