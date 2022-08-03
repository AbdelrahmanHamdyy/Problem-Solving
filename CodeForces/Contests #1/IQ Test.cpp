#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	int n; cin >> n;
	vector<int> v(n);
	vector<int> even, odd;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		if (v[i] % 2 == 0)
			even.push_back(v[i]);
		else
			odd.push_back(v[i]);
	}
	if (even.size() > odd.size())
	{
		for (int i = 0; i < n; i++)
		{
			if (v[i] == odd[0])
			{
				cout << i + 1 << endl;
				break;
			}
		}
	}
	else {
		for (int i = 0; i < n; i++)
		{
			if (v[i] == even[0])
			{
				cout << i + 1 << endl;
				break;
			}
		}
	}
		
	return 0;
}