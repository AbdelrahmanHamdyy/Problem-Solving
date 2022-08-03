#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	bool found = false;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 1)
		{
			found = true;
			break;
		}
	}
	if (found)
		cout << "HARD" << endl;
	else
		cout << "EASY" << endl;

}
