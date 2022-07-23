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
	vi v(n);
	int s = 0;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		s += v[i];
	}
	int target = s / (n / 2);
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (target == v[i] + v[j]) {
				cout << i + 1 << " " << j + 1 << endl;
				v[i] = 0;
				v[j] = 0;
			}
		}
	}
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
		solve();
	return 0;
}