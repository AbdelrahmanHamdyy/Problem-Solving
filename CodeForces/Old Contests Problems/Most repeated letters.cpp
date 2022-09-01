#include <iostream>
#include <string>
#include <vector>
#include "string.h"
#include "math.h"
using namespace std;

int count(string s, char c)
{
	int n = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (tolower(s[i]) == c)
			n++;
	}
	return n;
}

int main()
{
	int arr[26];
	char letters[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s',
	't','u','v','w','x','y','z' };
	for (int i = 0; i < 26; i++)
		arr[i] = 0;
	string s;
	getline(cin, s);
	for (int i = 0; i < 26; i++)
		arr[i] = count(s, letters[i]);
	int index = 0;
	for (int i = 0; i < 26; i++)
	{
		index = 0;
		int max = arr[0];
		for (int j = 0; j < 26; j++)
		{
			if (arr[j] > max)
			{
				max = arr[j];
				index = j;
			}
		}
		if (max == 0)
			break;
		cout << letters[index] << "=" << max << endl;
		arr[index] = 0;
	}
}
