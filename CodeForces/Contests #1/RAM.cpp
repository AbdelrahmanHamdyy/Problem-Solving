#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(vector<int>& a, vector<int>& b, vector<int>& isused, int n, int k)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (k >= a[j] && !isused[j])
			{
				k += b[j];
				isused[j] = 1;
			}
		}
	}
	return k;
}

int main()
{
	int t; cin >> t;
	vector<int> ans(t);
	for (int T = 0; T < t; T++)
	{
		int n, k; cin >> n >> k;
		vector<int> dp(101, -1);
		vector<int> a(n);
		vector<int> b(n);
		vector<int> isused(n, 0);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++)
			cin >> b[i];
		vector<pair<int, int>> p;
		for (int i = 0; i < n; i++)
			p.push_back({ b[i], a[i] });
		sort(p.begin(), p.end(), greater<>());
		ans[T] = solve(a, b, isused, n, k);
	}
	for (int i = 0; i < t; i++)
		cout << ans[i] << endl;
}