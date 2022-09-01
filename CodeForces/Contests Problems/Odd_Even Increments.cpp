#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

void evenIncrement(vector<int>& v) {
	for (int i = 1; i < v.size(); i++) {
		if (i % 2 == 0)
			v[i]++;
	}
}

void oddIncrement(vector<int>& v) {
	for (int i = 1; i < v.size(); i++) {
		if (i % 2 != 0)
			v[i]++;
	}
}

bool checkEven(vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i] % 2 != 0)
			return false;
	}
	return true;
}

bool checkOdd(vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i] % 2 == 0)
			return false;
	}
	return true;
}

int main() {
	init;
	// Code
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> v(n);
		bool flag = true;
		for (int i = 0; i < n - 2; i++)
			if ((v[i] % 2) != (v[i + 2] % 2)) {
				flag = false;
				break;
			}
		if (flag == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}