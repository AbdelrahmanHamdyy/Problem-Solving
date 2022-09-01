#include <iostream>
#include <string>
#include <vector>
#include "math.h"
using namespace std;

int main()
{
	int arr[4];
	for (int i = 0; i < 4; i++)
		cin >> arr[i];
	string s;
	cin >> s;
	int count = 0;
	for (int i = 0; i < s.size(); i++)
	{
		char c = s[i];
		int index = c - '0';
		count += arr[index - 1];
	}
	cout << count << endl;
}
