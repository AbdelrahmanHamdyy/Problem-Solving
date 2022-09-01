#include <iostream>
#include <vector>
#include <climits>
#include <utility>
#include <string>
#include <algorithm>
typedef long long ll;
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	/* vector<pair<ll, ll>> prob;
	for (ll a = 1; a <= n; a++)
	{
		ll count = 0;
		for (ll c = 1; c <= n; c++)
		{
			if (abs(c - a) < abs(c - m))
				count++;
		}
		prob.push_back({ count, a });
	}
	sort(prob.begin(), prob.end());
	cout << prob[n - 1].second << endl; */

	if (n % 2 != 0)
	{
		if (m >= (n + 1) / 2)
			m - 1 != 0 ? cout << m - 1 : cout << "1";
		else
			cout << m + 1;
	}
	else
	{
		if (m > n / 2)
			m - 1 != 0 ? cout << m - 1 : cout << "1";
		else
			cout << m + 1;
	}
	return 0;
}