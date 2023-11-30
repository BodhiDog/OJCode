#include <bits/stdc++.h>
using namespace std;

const int N = 3010;
string mins[N], maxs[N];
int n;
char check(int x)
{
	for (int i = 1; i <= n; ++i)
	{
		if (i == x)
		{
			continue;
		}
		if (mins[x] >= maxs[i])
		{
			return '0';
		}
	}
	return '1';
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string temp;
	char c;
	int m, i, j;
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
	{
		cin >> temp;
		sort(temp.begin(), temp.end());
		mins[i] = temp;
		reverse(temp.begin(), temp.end());
		maxs[i] = temp;
	}
	for (i = 1; i <= n; ++i)
	{
		cout << check(i);
	}
	return 0;
}
