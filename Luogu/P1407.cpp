#include <bits/stdc++.h>
using namespace std;

const int N = 4010, M = 2e4 + 10;
struct
{
	int to, nxt;
} e[M + N];
struct
{
	string a, b;
} cou[N];
map<string, int> mp;
int head[N * 2], tot, sta[N * 2], top, dfn[N * 2], low[N * 2], tme, group[N * 2], scc;
void add(int x, int y)
{
	e[++tot] = {y, head[x]};
	head[x] = tot;
}
void tarjan(int x)
{
	dfn[x] = low[x] = ++tme;
	sta[++top] = x;
	for (int i = head[x], to; i; i = e[i].nxt)
	{
		to = e[i].to;
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
		++scc;
		while (sta[top] != x)
		{
			group[sta[top]] = scc;
			--top;
		}
		group[sta[top]] = scc;
		--top;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string a, b;
	int n, m, i, ptot = 0;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> a >> b;
		cou[i] = {a, b};
		mp[a] = ++ptot;
		mp[b] = ++ptot;
		add(mp[a], mp[b]);
	}
	cin >> m;
	for (i = 1; i <= m; ++i)
	{
		cin >> a >> b;
		add(mp[b], mp[a]); // 注意建图方式，具体可参考第一篇题解
	}
	for (i = 1; i <= 2 * n; ++i)
	{
		if (!dfn[i])
		{
			tarjan(i);
		}
	}
	for (i = 1; i <= n; ++i)
	{
		cout << (group[mp[cou[i].a]] == group[mp[cou[i].b]] ? "Unsafe\n" : "Safe\n");
	}
	return 0;
}
