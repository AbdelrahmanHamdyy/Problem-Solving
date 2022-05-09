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

void solve() {

}

int main() {
	fast;
	// ll t; cin >> t;
	// vs p;
	// vl p;
	// while (t--)
	//	solve();
	string s; cin >> s;
	string t = s;
	string temp = "";
	int index = 0;
	bool flag = true;
	for (int i = sz(s) - 1; i >= 0; i--) {
		if (s[i] == 'a') {
			index = i;
			break;
		}
	}
	string back = s.substr(index + 1, s.size());
	s.erase(index + 1, s.size());
	s.erase(remove(s.begin(), s.end(), 'a'), s.end());
	if (s.size() > back.size())
		flag = false;
	else {
		s += back;
		string half = s.substr(s.size() / 2, s.size());
		s.erase(sz(s) / 2, sz(s));
		if (s != half)
			flag = false;
		else
			temp = t.erase(sz(t) - half.size(), t.size());
	}
	if (flag) cout << temp;
	else cout << ":(";
	return 0;
}