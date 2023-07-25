#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 1e5 + 10;
struct
{
	int to, next;
} e[R * 2];
int head[R * 2], tot;
void add(int x, int y)
{
	e[++tot] = {.to = y, .next = head[x]};
	head[x] = tot;
}
struct
{
	int sz, fa, hson;
} t[R];
ll ans[R], maxcnt, maxcol;
int col[R], cnt[R];
void dfs1(int x) // 找重儿子
{
	t[x].sz = 1;
	for (int i = head[x], to; i; i = e[i].next)
	{
		to = e[i].to;
		if (to != t[x].fa)
		{
			t[to].fa = x;
			dfs1(to);
			t[x].sz += t[to].sz;
			if (t[to].sz > t[t[x].hson].sz)
				t[x].hson = to;
		}
	}
}
void count(int x, int save, int v) // 在不统计结点save的情况下，统计子树中的所有结点以得到子树的根结点的答案
{
	cnt[col[x]] += v;
	if (cnt[col[x]] > maxcnt)
		maxcol = col[x], maxcnt = cnt[col[x]];
	else if (cnt[col[x]] == maxcnt) // 要加else，因为上面将cnt[col[x]]→maxcnt
		maxcol += col[x];
	for (int i = head[x], to; i; i = e[i].next)
	{
		to = e[i].to;
		if (to != t[x].fa && to != save)
			count(to, save, v);
	}
}
void dfs2(int x, bool keep)
{
	for (int i = head[x], to; i; i = e[i].next) // 优先遍历轻儿子，并对轻儿子求答案、清空
	{
		to = e[i].to;
		if (to != t[x].fa && to != t[x].hson)
			dfs2(to, false);
	}
	if (t[x].hson)
		dfs2(t[x].hson, true);
	count(x, t[x].hson, 1); // 重儿子保留下来，无需再次统计
	ans[x] = maxcol;
	if (!keep)
	{
		count(x, 0, -1);
		maxcnt = maxcol = 0;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, j, u, v;
	cin >> n;
	for (j = 1; j <= n; ++j)
		cin >> col[j];
	for (j = 1; j < n; ++j)
	{
		cin >> u >> v;
		add(u, v), add(v, u);
	}
	dfs1(1);
	dfs2(1, true);
	for (j = 1; j <= n; ++j)
		cout << ans[j] << ' ';
	return 0;
}
