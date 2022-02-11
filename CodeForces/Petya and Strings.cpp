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
	string s1, s2;
	cin >> s1;
	cin >> s2;
	int sum1, sum2, n;
	sum1 = 0;
	sum2 = 0;
	for (int i = 0; i < s1.size(); i++) {
		s1[i] = tolower(s1[i]);
		s2[i] = tolower(s2[i]);
		sum1 += int(s1[i]);
		sum2 += int(s2[i]);
	}
	if (sum1 < sum2) {
		n = -1;
		cout << n << endl;
	}
	else if (sum1 > sum2) {
		n = 1;
		cout << n << endl;
	}
	else {
		n = 0;
		cout << n << endl;
	}
}
