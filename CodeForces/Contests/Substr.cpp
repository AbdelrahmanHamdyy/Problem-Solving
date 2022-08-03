#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int n = s.size();
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		string sub;
		for (int j = i; j < n; j++)
		{
			sub += s[j];
			int count = 0;
			for (int k = 0; k + sub.size() <= n; k++)
			{
				if (s.substr(k, sub.size()) == sub)
					count++;
			}
			if (count >= 2)
				ans = max(ans, (int)sub.size());
		}
	}
	cout << ans << endl;
}
