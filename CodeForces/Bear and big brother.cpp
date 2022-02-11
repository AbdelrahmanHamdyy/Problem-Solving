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
	int a, b, y;
	y = 0;
	do {
		cin >> a >> b;
	} while ((a > b) || a < 1 || b >10);
	while (a <= b) {
		a *= 3;
		b *= 2;
		y++;
	}
	cout << y << endl;
}
