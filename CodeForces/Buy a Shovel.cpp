#include <bits/stdc++.h>
#define init ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
using namespace std;

int main() {
	init;
	// Code
	int k, r;
	cin >> k >> r;
	int count = 0;
	bool done = false;
	int i = 1;
	while (!done)
	{
		int s = i * k;
		count++;
		if (s % 10 == 0 || s % 10 == r)
			done = true;
		i++;
	}
	cout << count << endl;
	return 0;
}