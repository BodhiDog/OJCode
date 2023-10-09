#include <bits/stdc++.h>
using namespace std;

char a[5][5], b[5][5];
int exist[130], eb[130];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int i, j;
	for (i = 1; i <= 3; ++i)
	{
		for (j = 1; j <= 3; ++j)
		{
			cin >> a[i][j];
			++exist[a[i][j]];
		}
	}
	int same = 0, ans2 = 0;
	for (i = 1; i <= 3; ++i)
	{
		for (j = 1; j <= 3; ++j)
		{
			cin >> b[i][j];
			++eb[b[i][j]];
			if (a[i][j] == b[i][j])
			{
				++same;
			}
		}
	}
	for (i = 'A'; i <= 'z'; ++i)
	{
		ans2 += min(exist[i], eb[i]);
	}
	cout << same << '\n'
		<< ans2 - same <<'\n';
	return 0;
}
