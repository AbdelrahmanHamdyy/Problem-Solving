#include <iostream>
#include <string>
#include <vector>
#include "math.h"
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> home;
	vector<int> away;
	for (int i = 0; i < n; i++)
	{
		int n1, n2;
		cin >> n1 >> n2;
		home.push_back(n1);
		away.push_back(n2);
	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		int h = home[i];
		for (int j = 0; j < away.size(); j++)
		{
			if (h == away[j])
				count++;
		}
	}
	cout << count;
}
