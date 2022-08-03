#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include "string.h"
using namespace std;

int main()
{
	long long n; // Participants
	long long m; // Teams
	cin >> n >> m;
	long long max = n - m + 1; // Max number of ppl in one team after the otehrs have been assigned one member
	max = max * (max - 1) / 2; // n*(n-1)/2 which is used to get the number of pairings
	long long min = (n / m) * ((n / m) - 1) / 2; // all possible pairings
	if (n % m == 0)
		min *= m;
	else
	{
		min *= m - (n % m);
		long long leftovers = (n / m) * ((n / m) + 1) / 2;
		min += leftovers * (n % m);
	}
	cout << min << " " << max << endl;
}