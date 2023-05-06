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

void Collect(vector<vector<ll>>& v, vector<vector<ll>> visited, ll i, ll j, ll N, ll M, ll sum, ll& max, ll count)
{
	sum += v[i][j];
	visited[i][j] = 1;
	if (v[i][j] == 0 || count >= (N * M) - 1)
	{
		if (sum > max)
			max = sum;
		return;
	}
	if (i - 1 >= 0 && !visited[i - 1][j])
		Collect(v, visited, i - 1, j, N, M, sum, max, count + 1);
	if (j - 1 >= 0 && !visited[i][j - 1])
		Collect(v, visited, i, j - 1, N, M, sum, max, count + 1);
	if (i + 1 <= N - 1 && !visited[i + 1][j])
		Collect(v, visited, i + 1, j, N, M, sum, max, count + 1);
	if (j + 1 <= M - 1 && !visited[i][j + 1])
		Collect(v, visited, i, j + 1, N, M, sum, max, count + 1);
	return;
}

ll T, n, m, v, a[1001][1001];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };
ll f(int x, int y)
{
	ll ret = a[x][y];
	a[x][y] = 0;
	for (int i = 0; i < 4; i++)
		if (0 <= x + dx[i] && x + dx[i] < n && 0 <= y + dy[i] && y + dy[i] < m)
			if (a[x + dx[i]][y + dy[i]])
				ret += f(x + dx[i], y + dy[i]);
	return ret;
}
void solve()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	ll ans = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (a[i][j])
				ans = max(ans, f(i, j));
		}
	cout << ans << endl;
}

int main() {
	fast;
	int t; cin >> t;
	while (t--)
		solve();
	return 0;
}