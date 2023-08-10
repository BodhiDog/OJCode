#include <bits/stdc++.h>
using namespace std;

const int N = 5e3 + 10, M = 1e4 + 10;
struct Edge
{
	int to, next;
} e[M * 2];
int head[M * 2], tot, dfn[N], low[N], tme, gcnt, group[N], sta[N], top, du[N];
bool b[N][N]; // 预防重边
vector<int> son[N];
void add(int x, int y)
{
	e[tot] = {y, head[x]};
	head[x] = tot++;
}
void tarjan(int x, int frome)
{
	dfn[x] = low[x] = ++tme;
	sta[++top] = x;
	for (int j = head[x], to; ~j; j = e[j].next)
	{
		if ((j ^ frome) != 1)
		{
			to = e[j].to;
			if (!dfn[to])
			{
				tarjan(to, j);
				low[x] = min(low[x], low[to]);
			}
			else
			{
				low[x] = min(low[x], dfn[to]);
			}
		}
	}
	if (low[x] == dfn[x])
	{
		++gcnt;
		while (sta[top] != x)
		{
			group[sta[top--]] = gcnt;
		}
		group[sta[top--]] = gcnt;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	memset(head, -1, sizeof(head));
	int n, m, j, x, y;
	cin >> n >> m;
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y;
		add(x, y), add(y, x);
	}
	tarjan(1, -1); // 初始frome要设置为一个不可能的数！！！
    /*若这里写的是tarjan(1, 0)
    hack:
    6 5
    3 1
    3 2
    3 4
    3 5
    3 6*/
	for (x = 1; x <= n; ++x)
	{
		for (j = head[x]; ~j; j = e[j].next)
		{
			y = e[j].to;
			if (group[x] != group[y] && !b[x][y])
			{
				b[x][y] = true;
				++du[group[x]], ++du[group[y]];
			}
		}
	}
	int ans = 0;
	for (j = 1; j <= gcnt; ++j)
	{
		if (du[j] == 2)
		{
			++ans;
		}
	}
	cout << (ans + 1) / 2 << '\n';
	return 0;
}
