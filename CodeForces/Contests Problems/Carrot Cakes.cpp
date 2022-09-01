#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define cin(v) for (int i = 0; i < sz(v); i++) cin >> v[i];
#define cout(v) for (auto i : v) cout << i << endl;

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

// vs p;
// vl p;

void solve() {
	int n; // Number of Cakes
	int t; // Time for each cake to be ready
	int k; // Number of Cakes ready after t minutes
	int d; // Time taken for second oven to be built
	cin >> n >> t >> k >> d;
	float timeSlots = ceil(float(n) / k);
	float TimeForOneOven = timeSlots * t;
	if ((TimeForOneOven - t) > d)
		cout << "YES";
	else
		cout << "NO";
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
		solve();
	return 0;
}