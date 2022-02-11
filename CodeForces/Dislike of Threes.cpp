#include <iostream>
#include <string>
#include <vector>
#include "math.h"
using namespace std;

int main()
{
	int t;
	cin >> t;
	int* arr = new int[t];
	for (int i = 0; i < t; i++)
		cin >> arr[i];
	int n = 0;
	for (int i = 0; i < t; i++)
	{
		int k = 1;
		for (int j = 0; j < arr[i]; j++)
		{
			while (k % 3 == 0 || ((k - 3) % 10 == 0))
				k++;
			n = k;
			k++;
		}
		cout << n << endl;
	}
}
