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
	vector<vc> v(n, vc(n));
	vector<pair<int, int>> pos;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
			if (v[i][j] == '*') pos.push_back({ i, j });
		}
	}
	if (pos[0].first == pos[1].first) {
		if (pos[0].first + 1 < n) {
			pos.push_back({ pos[0].first + 1, pos[0].second });
			pos.push_back({ pos[1].first + 1, pos[1].second });
		}
		else {
			pos.push_back({ pos[0].first - 1, pos[0].second });
			pos.push_back({ pos[1].first - 1, pos[1].second });
		}
	}
	else if (pos[0].second == pos[1].second) {
		if (pos[0].second + 1 < n) {
			pos.push_back({ pos[0].first, pos[0].second + 1 });
			pos.push_back({ pos[1].first, pos[1].second + 1 });
		}
		else {
			pos.push_back({ pos[0].first, pos[0].second - 1 });
			pos.push_back({ pos[1].first, pos[1].second - 1 });
		}
	}
	else {
		pos.push_back({ pos[0].first, pos[1].second });
		pos.push_back({ pos[1].first, pos[0].second });
	}
	v[pos[2].first][pos[2].second] = '*';
	v[pos[3].first][pos[3].second] = '*';
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << v[i][j];
		}
		cout << endl;
	}
}

int main() {
	fast;
	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}