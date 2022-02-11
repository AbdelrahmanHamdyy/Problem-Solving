#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <string>
#include <string.h>
#include <cmath>
#include <ctype.h>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int n; // Number of Participants
	int k; // Postion
	cin >> n >> k;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int kscore = arr[k - 1];
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0 && arr[i] >= kscore)
			count++;
	}
	cout << count << endl;
}
