#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int n, boylike[N][N], girllike[N][N], boymatch[N], girlmatch[N], book[N]/*匹配到第几个喜欢的*/;
bool check()
{
	int cnt = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (boymatch[i] != -1) // 匹配上了
		{
			++cnt;
		}
	}
	return n == cnt;
}
bool better(int a, int b, int girl)
{
	int x, y;
	for (int i = 1; i <= n; ++i)
	{
		if (girllike[girl][i] == a)
		{
			x = i;
		}
		else if (girllike[girl][i] == b)
		{
			y = i;
		}
	}
	return x < y;
}
void gs()
{
	int i, now;
	while (!check())
	{
		for (i = 1; i <= n; ++i)
		{
			if (boymatch[i] == -1)
			{
				++book[i];
				now = girlmatch[boylike[i][book[i]]];
				if (now == -1 || better(i, now, boylike[i][book[i]])) // boyi还没被匹配或者boyi比现在女孩匹配到的更好
				{
					boymatch[i] = boylike[i][book[i]];
					boymatch[now] = -1;
					girlmatch[boylike[i][book[i]]] = i;
				}
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int i, j;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= n; ++j)
		{
			cin >> boylike[i][j];
		}
	}
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= n; ++j)
		{
			cin >> girllike[i][j];
		}
	}
	memset(boymatch, -1, sizeof(boymatch));
	memset(girlmatch, -1, sizeof(girlmatch));
	gs();
	for (i = 1; i <= n; ++i)
	{
		cout << girlmatch[i] << '\n';
	}
	return 0;
}
