#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void shiftLeft(vector<int>& v, int index, int& count)
{
	if (index > 1 && index < v.size()) {
		if (v[index - 1] == 0) {
			v[index - 1] = 1;
			v[index] = 0;
			count++;
		}
	}
}

void shiftRight(vector<int>& v, int index, int& count)
{
	if (v.size() > 2) {
		if (index >= 0 && index < v.size() - 2) {
			if (v[index + 1] == 0) {
				v[index + 1] = 1;
				v[index] = 0;
				count++;
			}
		}
	}
}

void solve(vector<int>& v, int i, int& Min, int count)
{
	if (i >= v.size())
	{
		if (count < Min)
			Min = count;
		return;
	}
	//shiftRight(v, i, count);
	shiftLeft(v, i, count);
	solve(v, i + 1, Min, count);
	shiftRight(v, i, count);
	solve(v, i + 1, Min, count);
}

int main() {
	int t, n;
	cin >> t >> n;
	vector<int> v(n);
	for (int T = 0; T < t; T++) {
		for (int i = 0; i < n; i++)
			cin >> v[i];
		int Min = INT_MAX;
		solve(v, 0, Min, 0);
		cout << Min << endl;
	}
	return 0;
}