#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	vector<int> v;
	int n;
	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> n;
		if (i != 0 && (find(v.begin(), v.end(), n) != v.end()))
			count++;
		v.push_back(n);
	}
	cout << count << endl;
	return 0;
}