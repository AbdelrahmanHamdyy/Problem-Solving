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

int main() {
	int n;
	int problem = 0;
	cin >> n;
	int arr[3];
	int count;
	for (int i = 0; i < n; i++) {
		count = 0;
		for (int j = 0; j < 3; j++) {
			cin >> arr[j];
		}
		for (int k = 0; k < 3; k++) {
			if (arr[k] == 0) {
				count++;
			}
		}
		if (count <= 1) {
			problem++;
		}
	}
	cout << problem << endl;
}
