#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 410, M = 1.5e4 + 10;
struct
{
	int to, nxt;
	ll cap, cost;
} e[M * 2];
int head[N], last[N], tot, s, t;
ll dis[N], minc;
bool b[N];
void add(int x, int y, ll w, ll c)
{
	e[tot] = {y, head[x], w, c};
	head[x] = tot++;
}
bool spfa()
{
	memset(dis, 0x3f, sizeof(dis));
	memset(b, false, sizeof(b));
	dis[t] = 0;
	queue<int> q;
	q.push(t);
	b[t] = true;
	int x, to, i;
	ll cost, cap;
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		b[x] = false;
		for (i = head[x]; ~i; i = e[i].nxt)
		{
			to = e[i].to;
			cap = e[i ^ 1].cap;
			cost = e[i].cost;
			if (cap && dis[x] + (-cost) < dis[to])
			{
				dis[to] = dis[x] + (-cost);
				if (!b[to])
				{
					q.push(to);
					b[to] = true;
				}
			}
		}
	}
	return dis[s] != 0x3f3f3f3f3f3f3f3f;
}
ll dfs(int x, ll flow)
{
	if (x == t)
	{
		b[t] = true;
		return flow;
	}
	b[x] = true;
	int to, i;
	ll cap, add, res = 0, cost;
	for (i = last[x]; ~i; i = last[x] = e[i].nxt)
	{
		to = e[i].to;
		cap = e[i].cap;
		cost = e[i].cost;
		if (!b[to] && cap > 0 && dis[to] == dis[x] - cost)
		{
			add = dfs(to, min(cap, flow));
			if (add)
			{
				e[i].cap -= add;
				e[i ^ 1].cap += add;
				flow -= add;
				res += add;
				minc += cost * add;
				if (!flow)
				{
					break;
				}
			}
		}
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	memset(head, -1, sizeof(head));
	int n, m, i, x, y;
	ll w, c;
	cin >> n >> m;
	s = 1, t = n;
	for (i = 1; i <= m; ++i)
	{
		cin >> x >> y >> w >> c;
		add(x, y, w, c);
		add(y, x, 0, -c);
	}
	ll maxf = 0;
	while (spfa())
	{
		b[t] = true;
		while (b[t])
		{
			memset(b, false, sizeof(b));
			copy(head, head + N, last);
			maxf += dfs(s, 1e10);
		}
	}
	cout << maxf << ' ' << minc << '\n';
	return 0;
}
