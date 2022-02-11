#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <string.h>
using namespace std;
void permutation(int, int*, int*&);
int main()
{
	int t;
	cin >> t;
	int* arr = new int[t];
	for (int i = 0; i < t; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < t; i++)
	{
		int* p = new int[arr[i]];
		permutation(i, arr, p);
		for (int j = 0; j < arr[i]; j++)
		{
			cout << p[j] << " ";
		}
		cout << endl;
		delete[] p;
	}
	delete[] arr;
}
void permutation(int i, int* arr, int*& p)
{
	for (int a = 0; a < arr[i]; a++)
	{
		for (int b = arr[i]; b >= 1; b--)
		{
			bool found = false;
			if (a + 1 == b)
				continue;
			for (int x = 0; x < arr[i]; x++)
			{
				if (b == p[x])
					found = true;
			}
			if (!found)
			{
				p[a] = b;
				break;
			}
		}
	}
}