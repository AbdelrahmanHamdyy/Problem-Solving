#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n, m;
int c = 0;
void solve(vector<vector<int>>& students, vector<int>& tied)
{
	vector<pair<int, int>> tokick;
	for (int i = 1; i < n + 1; i++)
	{
		int s1 = 0, s2 = 0;
		bool flag = 0;
		for (int k = 1; k < n + 1; k++)
		{
			if (tied[k] == 1)
			{
				for (int j = 1; j < n + 1; j++)
				{
					if (students[k][j] == 1)
					{
						tokick.push_back({ k, j });
						flag = 1;
						break;
					}
				}
			}
		}
		if (flag)
		{
			for (int a = 0; a < tokick.size(); a++)
			{
				students[tokick[a].first][tokick[a].second] = students[tokick[a].second][tokick[a].first] = 0;
				tied[tokick[a].first]--;
				tied[tokick[a].second]--;
			}
			c++;
			tokick.clear();
		}
	}
}
int main() {
	cin >> n >> m;
	vector<vector<int>> students(n + 1, vector<int>(n + 1, 0));
	vector<int> tied(n + 1, 0);
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		students[a][b] = students[b][a] = 1;
		tied[a]++;
		tied[b]++;
	}
	solve(students, tied);
	cout << c;
	return 0;
}