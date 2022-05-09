#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int getSum(vector<int>& v, int start, int end) {
	int sum = 0;
	for (int i = start; i < end; i++)
		sum += v[i];
	return sum;
}

int main() {
	fast;
	// Code
	int n; cin >> n;
	int size = 2 * n;
	vector<int> v(size);
	for (int i = 0; i < size; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	if (getSum(v, 0, n) == getSum(v, n, size))
		cout << "-1";
	else
		for (auto i : v)
			cout << i << " ";
	return 0;
}