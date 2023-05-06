#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <queue>
#include <map>
#include <unordered_map>
#include <unordered_set>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define cin(v) for (int i = 0; i < sz(v); i++) cin >> v[i];
#define cout(v) for (auto i : v) cout << i << " ";
#define forn(j, n) for (ll i = j; i < n; i++)
constexpr double pi = 3.14159265358979323846;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef set<int> si;

vb isVisited(10000001, false);

void dfs(vector<vi> &graph, int node) {
	isVisited[node] = true;
	for (auto child : graph[node]) {
		if (!isVisited[child])
			dfs(graph, child);
	}
}

void bfs(vector<vi> graph, int node) {
	queue<int> nextToVisit;
	nextToVisit.push(node);
	while (!nextToVisit.empty()) {
		int current = nextToVisit.front();
		isVisited[current] = true;
		nextToVisit.pop();
		for (auto child : graph[current]) {
			if (!isVisited[child]) {
				isVisited[child] = true;
				nextToVisit.push(child);
			}
		}
	}
}

vl prime_factors(ll n) {
	vl primes;
	for (ll i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			primes.push_back(i);
			n /= i;
		}
	}
	if (n > 1)
		primes.push_back(n);
	return primes;
}

ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}

ll fact(ll n) {
	return n == 1 ? 1 : n * fact(n - 1);
}

ll nCr(ll n, ll r) {
	ll g, u = 1, d = 1;
	for (ll i = 0; i < r; i++) {
		u = u * (n - i);
		d = d * (r - i);
		g = gcd(u, d);
		u /= g;
		d /= g;
	}
	return u;
}

bool isPrime(int n) {
	for (int i = 2; i < n; i++)
		if (n % i == 0) return false;
	return true;
}

int getFirstDivisor(int n) {
	for (int i = 2; i < n; i++)
		if (n % i == 0) return i;
}

int getSumOfDigits(int n) {
	int ans = 0;
	while (n) {
		ans += n % 10, n /= 10;
	}
	return ans;
}

ll countDigits(ll n) {
	ll ans = 0;
	while (n) {
		ans++;
		n /= 10;
	}
	return ans;
}

void print(vl& v) {
	ll len = sz(v);
	for (ll i = 0; i < len; i++) {
		if (i < len - 1) cout << v[i] << " ";
		else cout << v[i];
	}
	cout << endl;
}

bool f = false;
void canMakePile(int n, int m) {
	if (n == m) {
		f = true;
		return;
	}
	if (n % 3 != 0) return;
	canMakePile(n / 3, m);
	canMakePile(n - (n / 3), m);
}

void solve() {
	ll n, m; cin >> n >> m;
	if (n == m) {
		cout << "YES" << endl;
		return;
	}
	if (n % 3 != 0 || n < m) {
		cout << "NO" << endl;
		return;
	}
	canMakePile(n, m);
	if (f) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	f = false;
}

int main() {
	fast;
	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}