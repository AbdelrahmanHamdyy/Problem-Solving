#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

bool checkSum(vector<int> v) {
	int sum = 0;
	for (int i = 0; i < v.size(); i++)
		sum += v[i];
	return (sum == 0);
}

int main() {
	init;
	// Code
	int n; cin >> n;
	vector<int> x(n);
	vector<int> y(n);
	vector<int> z(n);
	for (int i = 0; i < n; i++) {
		int X, Y, Z;
		cin >> X >> Y >> Z;
		x.push_back(X);
		y.push_back(Y);
		z.push_back(Z);
	}
	if (checkSum(x) && checkSum(y) && checkSum(z))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}