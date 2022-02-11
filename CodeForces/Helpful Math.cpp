#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "string.h"
/*#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <string>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <ctime>*/
using namespace std;

int main() {
	string input;
	cin >> input;
	vector<char> ordered;
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] != '+')
		{
			ordered.push_back(input[i]);
		}
	}
	sort(ordered.begin(), ordered.end());
	for (int i = 0; i < ordered.size(); i++)
	{
		if (i != ordered.size() - 1)
			cout << ordered[i] << "+";
		else
			cout << ordered[i];
	}
	cout << endl;
	/*int n; // Number of students
	int k; // Size of the team
	cin >> n >> k;
	vector<int> arr(n);
	vector<int> team(k);
	vector<int> rep(n);
	vector<int>::iterator it;
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		max = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr[i] == arr[j])
				max++;
		}
		rep[i] = max;
	}
	max = *max_element(rep.begin(), rep.end());
	int diff = n - max;
	if ((k - diff) > 1)
	{
		cout << "NO" << endl;
		return 1;
	}
	cout << "YES" << endl;
	bool diverse = false;
	int index = 0;
	for (int i = 0; i < k; i++)
	{
		team[index] = arr[i];

	}*/
}
