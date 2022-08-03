#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int n, m;

void solve(int x, int y, int z, int k, bool& yes)
{
	if ((y + k <= m) && x <= n && z <= n)
		yes = 1;
	else if ((x + z <= n) && y <= m && k <= m)
		yes = 1;
}
int main() {
	int a1, b1, a2, b2;
	// n columns - m rows
	cin >> n >> m >> a1 >> b1 >> a2 >> b2;
	bool yes = 0;
	solve(a1, b1, a2, b2, yes);
	solve(b1, a1, a2, b2, yes);
	solve(a1, b1, b2, a2, yes);
	solve(b1, a1, b2, a2, yes);
	yes ? cout << "YES" << endl : cout << "NO" << endl;
	return 0;
}