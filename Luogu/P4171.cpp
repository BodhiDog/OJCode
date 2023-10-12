#include <bits/stdc++.h>
using namespace std;

const int N = 110, M = 1e3 + 10;
struct
{
	int to, next;
} e[M * 2];
int head[N * 2], tot, dfn[N * 2], low[N * 2], tme, belong[N * 2], sta[N * 2], top, scc;
void add(int x, int y)
{
	e[++tot] = {y, head[x]};
	head[x] = tot;
}
void tarjan(int x)
{
	dfn[x] = low[x] = ++tme;
	sta[++top] = x;
	for (int i = head[x], to; i; i = e[i].next)
	{
		to = e[i].to;
		if (!dfn[to])
		{
			tarjan(to);
			low[x] = min(low[x], low[to]);
		}
		else if(!belong[to])
		{
			low[x] = min(low[x], dfn[to]);
		}
	}
	if (low[x] == dfn[x])
	{
		++scc;
		while (sta[top] != x)
		{
			belong[sta[top--]] = scc;
		}
		belong[sta[top--]] = scc;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T, n, m, i, x, y;
	bool flag;
	string d1, d2;
	cin >> T;
	while (T--)
	{
		tot = tme = scc = top = 0;
		memset(dfn, 0, sizeof(dfn));
		memset(low, 0, sizeof(low));
		memset(head, 0, sizeof(head));
		memset(belong, 0, sizeof(belong));
		cin >> n >> m;
		for (i = 1; i <= m; ++i)
		{
			cin >> d1 >> d2;
			x = y = 0;
			for (char c : d1)
				if (isdigit(c))
					x = x * 10 + (c - 48);
			for (char c : d2)
				if (isdigit(c))
					y = y * 10 + (c - 48);
			if (d1[0] == 'm' && d2[0] == 'm') // m为真，h为假
			{
				add(x + n, y);
				add(y + n, x);
			}
			else if (d1[0] == 'm' && d2[0] == 'h')
			{
				add(x + n, y + n);
				add(y, x);
			}
			else if (d1[0] == 'h' && d2[0] == 'm')
			{
				add(x, y);
				add(y + n, x + n);
			}
			else
			{
				add(x, y + n);
				add(y, x + n);
			}
		}
		for (i = 1; i <= n; ++i)
		{
			if (!dfn[i])
			{
				tarjan(i);
			}
		}
		flag = true;
		for (i = 1; i <= n; ++i)
		{
			if (belong[i] == belong[i + n])
			{
				flag = false;
				break;
			}
		}
		cout << (flag ? "GOOD\n" : "BAD\n");
	}
	return 0;
}
