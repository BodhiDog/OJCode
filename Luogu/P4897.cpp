// https://www.luogu.com.cn/blog/mydcwfy-342891/solution-p4897
#include <bits/stdc++.h>
using namespace std;

const int N = 510, M = 1510;
struct
{
	int x, y, w;
} edge[M];
struct
{
	int to, nxt, cap;
} e[M * 4];
int ans[N][N], head[N], tot, last[N], dep[N], n, m, s, t, tmp1[N], tmp2[N], node[N];
void add(int x, int y, int cap)
{
	e[tot] = {y, head[x], cap};
	head[x] = tot++;
}
void reset()
{
	for (int i = 0; i < tot; i += 2)
	{
		e[i].cap = e[i].cap + e[i ^ 1].cap;
		e[i ^ 1].cap = 0;
	}
}
bool bfs()
{
	memset(dep, 0, sizeof(dep));
	queue<int> q;
	q.push(s);
	dep[s] = 1;
	int x, i, to;
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		for (i = head[x]; ~i; i = e[i].nxt)
		{
			to = e[i].to;
			if (!dep[to] && e[i].cap)
			{
				q.push(to);
				dep[to] = dep[x] + 1;
				if (to == t)
				{
					return true;
				}
			}
		}
	}
	return false;
}
int dfs(int x, int flow)
{
	if (x == t)
	{
		return flow;
	}
	int i, to, tot = 0, add, cap;
	for (i = last[x]; ~i; i = last[x] = e[i].nxt)
	{
		to = e[i].to;
		cap = e[i].cap;
		if (dep[to] == dep[x] + 1 && cap > 0)
		{
			add = dfs(to, min(flow, cap));
			e[i].cap -= add;
			e[i ^ 1].cap += add;
			tot += add;
			flow -= add;
			if (!flow)
			{
				break;
			}
		}
	}
	return tot;
}
int dinic()
{
	reset();
	int res = 0;
	while (bfs())
	{
		copy(head, head + N, last);
		res += dfs(s, INT_MAX);
	}
	return res;
}
void divwork(int l, int r)
{
	if (l >= r)
	{
		return;
	}
	s = node[l], t = node[l + 1];
	int x = node[l], y = node[l + 1], xx, yy, cnt1 = 0, cnt2 = 0, i, j, ls, rs;
	ans[s][t] = ans[t][s] = dinic();
	for (i = l; i <= r; ++i)
	{
		if (dep[node[i]])
		{
			tmp1[++cnt1] = node[i];
		}
		else
		{
			tmp2[++cnt2] = node[i];
		}
	}
	for (i = 1; i <= cnt1; ++i)
	{
		node[l + i - 1] = tmp1[i];
	}
	for (i = 1; i <= cnt2; ++i)
	{
		node[cnt1 + l + i - 1] = tmp2[i];
	}
	divwork(l, l + cnt1 - 1);
	divwork(l + cnt1, r);
	for (i = 1; i <= cnt1; ++i)
	{
		for (j = 1; j <= cnt2; ++j)
		{
			xx = node[l + i - 1], yy = node[cnt1 + l + j - 1];
			ans[xx][yy] = ans[yy][xx] = min({ans[xx][x], ans[x][y], ans[y][yy]});
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	memset(ans, 0x3f, sizeof(ans));
	memset(head, -1, sizeof(head));
	int q, x, y, w, i;
	cin >> n >> m;
	for (i = 1; i <= m; ++i)
	{
		cin >> x >> y >> w;
		edge[i] = {.x = x, .y = y, .w = w};
		add(x, y, w), add(y, x, 0);
		add(y, x, w), add(x, y, 0);
	}
	for (i = 0; i <= n; ++i)
	{
		node[i] = i;
	}
	divwork(0, n);
	cin >> q;
	while (q--)
	{
		cin >> x >> y;
		cout << ans[x][y] << '\n';
	}
	return 0;
}
