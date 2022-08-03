#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define cin(v) for (int i = 0; i < sz(v); i++) cin >> v[i];
#define cout(v) for (auto i : v) cout << i << endl;
constexpr int pi = 3.14159265358979323846;

typedef long long ll;
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

void solve() {
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		int n; cin >> n;
		vl finalSequence(n); cin(finalSequence);
		for (int j = 0; j < n; j++) {
			int numberOfMoves; cin >> numberOfMoves;
			string s; cin >> s;
			for (auto c : s) {
				if (c == 'D') {
					if (finalSequence[j] == 9)
						finalSequence[j] = 0;
					else
						finalSequence[j]++;
				}
				else {
					if (finalSequence[j] == 0)
						finalSequence[j] = 9;
					else
						finalSequence[j]--;
				}
			}
		}
		for (int k = 0; k < n; k++) {
			if (k != n - 1)
				cout << finalSequence[k] << " ";
			else
				cout << finalSequence[k] << endl;
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