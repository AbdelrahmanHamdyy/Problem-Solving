#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define cin(v) for (int i = 0; i < v.size(); i++) cin >> v[i];
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
vl p;

void solve() {
	ll n; cin >> n;
	vl v(n); cin(v);
	/* map<ll, ll> mp;
	map<ll, ll> mp2;
	for (ll i = 0; i < n; i++) {
		mp[v[i]]++;
		mp2[v[i]]++;
	}
	int count = 0;
	vl v2 = v;
	sort(all(v), greater<>());
	for (ll i = 0; i < n; i++) {
		ll num = v[i];
		bool flag = true;
		while (num > 0) {
			if (mp2[num] == 0) {
				flag = false;
				break;
			}
			mp2[num]--;
			num--;
		}
		if (flag) {
			mp = mp2;
			count++;
			p.push_back(v[i]);
		}
		else
			mp2 = mp;
	}
	cout << count << endl;
	sort(all(p), greater<>());
	for (auto i : v2) {
		auto it = find(all(p), i);
		if (it != p.end()) {
			cout << i << " ";
			p.erase(it);
		}
	} */
	ll counting = 1;
	ll total = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (v[i + 1] - v[i] == 1)
			counting++;
		else {
			p.push_back(counting);
			total++;
			counting = 1;
		}
	}
	p.push_back(counting);
	total++;
	cout << total << endl;
	for (auto i : p) cout << i << " ";

}

int main() {
	fast;
	//ll t; cin >> t;
	//while (t--)
	solve();
	//cout(p);
	return 0;
}