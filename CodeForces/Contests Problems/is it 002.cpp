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
	string s; getline(cin, s);
	string s1 = "", s2 = "", sb = "";
	int index = 0;
	for (int i = 0; i < sz(s); i++) {
		if (s[i] != ' ')
			s1 += s[i];
		else {
			index = i;
			break;
		}
	}
	int a1 = stoi(s1);
	char op = s[++index];
	index += 2;
	for (int i = index; i < sz(s); i++) {
		if (s[i] != ' ')
			s2 += s[i];
		else {
			index = i;
			break;
		}
	}
	int a2 = stoi(s2);
	index += 3;
	for (int i = index; i < sz(s); i++) {
		if (s[i] != ' ')
			sb += s[i];
		else {
			index = i;
			break;
		}
	}
	int res = stoi(sb);
	if (op == '+') {
		if (a1 + a2 == res)
			cout << "Yes";
		else
			cout << a1 + a2;
	}
	else if (op == '-') {
		if (a1 - a2 == res)
			cout << "Yes";
		else
			cout << a1 - a2;
	}
	else {
		if (a1 * a2 == res)
			cout << "Yes";
		else
			cout << a1 * a2;
	}
}

int main() {
	fast;
	// int t; cin >> t;
	// while (t--)
		solve();
	return 0;
}