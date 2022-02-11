#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <cstdio>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <ctime>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int sum1 = 0;
	int sum2 = 0;
	for (int i = n - 1; i >= 0; i-=2)
	{
		sum1 += arr[i];
		if (i - 1 >= 0 && i - 1 < n)
			sum2 += arr[i - 1];
	}
	cout << sum1 << " " << sum2 << endl;
}

