#include <bits/stdc++.h>
using namespace std;

const int R = 3010;
vector<int> son[R];
int moneyp[R], money[R], dfn[R], low[R], tme, sta[R], top, gcnt, group[R], rd[R];
void tarjan(int x)
{
	dfn[x] = low[x] = ++tme;
	sta[++top] = x;
	for (int to : son[x])
	{
		if (!dfn[to])
		{
			tarjan(to);
			low[x] = min(low[x], low[to]);
		}
		else if (!group[to])
		{
			low[x] = min(low[x], dfn[to]);
		}
	}
	if (low[x] == dfn[x])
	{
		++gcnt;
		while (sta[top] != x)
		{
			group[sta[top]] = gcnt;
			money[gcnt] = min(moneyp[sta[top]], money[gcnt]);
			--top;
		}
		group[sta[top]] = gcnt;
		money[gcnt] = min(moneyp[sta[top]], money[gcnt]);
		--top;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, p, r, j, x, y;
	cin >> n >> p;
	fill(moneyp + 1, moneyp + n + 1, INT_MAX);
	fill(money + 1, money + n + 1, INT_MAX);
	for (j = 1; j <= p; ++j)
	{
		cin >> x;
		cin >> moneyp[x];
	}
	cin >> r;
	for (j = 1; j <= r; ++j)
	{
		cin >> x >> y;
		son[x].push_back(y);
	}
	for (j = 1; j <= n; ++j)
	{
		if (!dfn[j] && moneyp[j] != INT_MAX)
		{
			tarjan(j);
		}
	}
	for (j = 1; j <= n; ++j)
	{
		if (!dfn[j])
		{
			cout << "NO\n"
				 << j << '\n';
			return 0;
		}
	}
	for (j = 1; j <= n; ++j)
	{
		for (int to : son[j])
		{
			if (group[j] != group[to]) // 别忘了判断是否在一个强联通分量里！！！
			{
				++rd[group[to]];
			}
		}
	}
	int ans = 0;
	for (j = 1; j <= gcnt; ++j)
	{
		if (rd[j] == 0)
		{
			ans += money[j];
		}
	}
	cout << "YES\n"
		 << ans << '\n';
	return 0;
}
