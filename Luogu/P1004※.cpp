#include <bits/stdc++.h>
using namespace std;

int mp[10][10], f[10][10][10][10], n;
int dfs(int x1, int y1, int x2, int y2)
{
	if (f[x1][y1][x2][y2] != -1)
		return f[x1][y1][x2][y2];
	if (x1 == n && y1 == n && x2 == n && y2 == n)
		return 0;
	int a = 0;
	if (x1 < n && x2 < n) // 都向下走
	{
		if (x1 + 1 == x2 + 1 && y1 == y2) // 判断重复的情况，所以减掉了一个
			a = max(dfs(x1 + 1, y1, x2 + 1, y2) + mp[x1 + 1][y1], a);
		else
			a = max(dfs(x1 + 1, y1, x2 + 1, y2) + mp[x1 + 1][y1] + mp[x2 + 1][y2], a);
	}
	if (y1 < n && y2 < n) // 都向右走
	{
		if (x1 == x2 && y1 + 1 == y2 + 1) // 判断重复的情况，所以减掉了一个
			a = max(dfs(x1, y1 + 1, x2, y2 + 1) + mp[x1][y1 + 1], a);
		else
			a = max(dfs(x1, y1 + 1, x2, y2 + 1) + mp[x1][y1 + 1] + mp[x2][y2 + 1], a);
	}
	if (x1 < n && y2 < n) // 1向下，2向右
	{
		if (x1 + 1 == x2 && y2 + 1 == y1)
			a = max(dfs(x1 + 1, y1, x2, y2 + 1) + mp[x1 + 1][y1], a);
		else
			a = max(dfs(x1 + 1, y1, x2, y2 + 1) + mp[x1 + 1][y1] + mp[x2][y2 + 1], a);
	}
	if (y1 < n && x2 < n) // 1向右，2向下
	{
		if (y1 + 1 == y2 && x2 + 1 == x1)
			a = max(dfs(x1, y1 + 1, x2 + 1, y2) + mp[x1][y1 + 1], a);
		else
			a = max(dfs(x1, y1 + 1, x2 + 1, y2) + mp[x1][y1 + 1] + mp[x2 + 1][y2], a);
	}
	return f[x1][y1][x2][y2] = a;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int x, y, a;
	memset(f, -1, sizeof(f));
	cin >> n;
	while (true)
	{
		cin >> x >> y >> a;
		if (x == 0 && y == 0 && a == 0)
			break;
		mp[x][y] = a;
	}
	cout << dfs(1, 1, 1, 1) + mp[1][1] << '\n';
	return 0;
}
