#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<char>& a)
{
	for (int i = 0; i < a.size(); i++)
		cout << a[i];
	cout << endl;
}

int main()
{
	int n, m; cin >> n >> m;
	vector<char> a1(m, '#');
	vector<char> a2(m, '.');
	a2[m - 1] = '#';
	vector<char> a3(m, '.');
	a3[0] = '#';
	int tog = 1;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			print(a1);
		else {
			if (tog == 1)
				print(a2);
			else
				print(a3);
			tog = tog ^ 1;
		}
	}
}