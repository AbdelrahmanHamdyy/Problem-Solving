#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/*
g1 g2
g3 g4
*/

int r1, r2;
int c1, c2;
int d1, d2;

int i = -1, j = -1, k = -1, z = -1;

bool solve()
{
	/* if ((g1 + g2 == r1) && (g1 + g3 == c1) &&
		(g1 + g4 == d1) && (g2 + g4 == c2) &&
		(g3 + g4 == r2) && (g2 + g3 == d2))
	{
		return true;
	} */
	for (int g1 = 1; g1 <= 9; g1++)
	{
		for (int g2 = 1; g2 <= 9; g2++)
		{
			if (g1 + g2 != r1 || g2 == g1) continue;
			for (int g3 = 1; g3 <= 9; g3++)
			{
				if ((g1 + g3 != c1) || (g2 + g3 != d2) || g3 == g1 || g3 == g2) continue;
				for (int g4 = 1; g4 <= 9; g4++)
				{
					if ((g1 + g4 == d1) && (g3 + g4 == r2) && (g2 + g4 == c2) && (g4 != g1) && (g4 != g2) && (g4 != g3))
					{
						i = g1; j = g2; k = g3; z = g4;
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int main() {
	cin >> r1 >> r2;
	cin >> c1 >> c2;
	cin >> d1 >> d2;
	bool t = solve();
	if (t) {
		cout << i << " " << j << endl;
		cout << k << " " << z << endl;
	}
	else
		cout << "-1" << endl;
	return 0;
}