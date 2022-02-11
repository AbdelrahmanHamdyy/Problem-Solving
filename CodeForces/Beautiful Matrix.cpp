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
void find_index(int arr[][5], int& a, int& b) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[i][j] == 1) {
				a = i;
				b = j;
				return;
			}
		}
	}
}
int main() {
	int arr[5][5];
	int x, y, n;
	n = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> arr[i][j];
		}
	}
	find_index(arr, x, y);
	if (x <= 2) {
		while (x != 2) {
			x++;
			n++;
		}
	}
	else {
		while (x != 2) {
			x--;
			n++;
		}
	}
	if (y <= 2) {
		while (y != 2) {
			y++;
			n++;
		}
	}
	else {
		while (y != 2) {
			y--;
			n++;
		}
	}
	cout << n << endl;
}
