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
	int n, h;
	cin >> n >> h;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > h)
		{
			sum += 2;
		}
		else
		{
			sum += 1;
		}
	}
	cout << sum << endl;
}

