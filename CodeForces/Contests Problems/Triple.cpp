#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	int t; cin >> t;
	vector<int> print;
	for (int i = 0; i < t; i++) {
		int count = -1;
		int size; cin >> size;
		int* v = new int[size];
		for (int i = 0; i < size; i++)
			cin >> v[i];
		sort(v, v + size);
		for (int i = 0; i < size; i++) {
			int f = upper_bound(v, v + size, v[i]) - lower_bound(v, v + size, v[i]);
			if (f >= 3) {
				count = v[i];
				break;
			}
		}
		print.push_back(count);
	}
	for (auto i : print)
		cout << i << endl;
	return 0;
}