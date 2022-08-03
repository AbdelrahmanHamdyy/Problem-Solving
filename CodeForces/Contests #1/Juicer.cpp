#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	int n, b, d;
	cin >> n >> b >> d;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	int count = 0;
	int t = d;
	for (int i = 0; i < n; i++) {
		if (v[i] <= b) {
			t -= v[i];
			if (t < 0)
			{
				count++;
				t = d;
			}
		}
	}
	cout << count << endl;
	return 0;
}