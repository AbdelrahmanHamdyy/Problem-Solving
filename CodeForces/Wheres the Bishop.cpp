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
    vector<vc> board(8, vc(8));
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            cin >> board[i][j];
    for (int i = 1; i < 7; i++)
        for (int j = 1; j < 7; j++)
            if (board[i][j] == '#' 
				&& board[i - 1][j - 1] == '#' 
				&& board[i + 1][j + 1] == '#' 
				&& board[i + 1][j - 1] == '#' 
				&& board[i - 1][j + 1] == '#')
                cout << i + 1 << " " << j + 1 << endl;
}

int main() {
	fast;
	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}