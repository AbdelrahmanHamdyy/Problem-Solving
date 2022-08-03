#include <iostream>
#include <string>
#include <vector>
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
	int police = 0;
	int crimes = 0;
	int untreated = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
			police += arr[i];
		else if (arr[i] < 0)
			crimes += 1;
		if (crimes > 0)
		{
			if (police > 0)
			{
				crimes--;
				police--;
			}
			else
			{
				untreated++;
				crimes--;
			}
		}
	}
	cout << untreated << endl;
}
