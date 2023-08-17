#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 2e5 + 10, M = 4e5 + 10;
struct
{
	int to, next;
	ll len;
} e[M * 2];
struct Edge
{
	int x, y, h;
	bool operator<(const Edge &oth) const { return h > oth.h; }
} edge[M];
struct Node
{
	int alt;
	ll dis;
	Node() { dis = LLONG_MAX; }
} p[N * 2];
struct Que
{
	int x;
	ll d;
	bool operator<(const Que &oth) const { return d > oth.d; }
};
vector<int> son[N * 2];
int head[N], etot, n, m, ptot, anc[N * 2][20], fa[N * 2];
ll dis[N];
bool b[N];
int find(int x) { return x == fa[x] ? x : fa[x] = find(fa[x]); }
void add(int x, int y, ll l)
{
	e[++etot] = {y, head[x], l};
	head[x] = etot;
}
void dijkstra()
{
	priority_queue<Que> q;
	memset(b, 0, sizeof(b));
	memset(dis, 0x3f, sizeof(dis));
	dis[1] = 0;
	q.push({1, 0});
	int x, to, i;
	ll len;
	while (!q.empty())
	{
		x = q.top().x;
		q.pop();
		if (!b[x])
		{
			b[x] = true;
			for (i = head[x]; i; i = e[i].next)
			{
				to = e[i].to;
				len = e[i].len;
				if (dis[x] + len < dis[to])
				{
					dis[to] = dis[x] + len;
					q.push({to, dis[to]});
				}
			}
		}
	}
}
void kruskal()
{
	int i, x, y;
	for (i = 1; i <= n; ++i)
	{
		fa[i] = i;
	}
	sort(edge + 1, edge + m + 1);
	ptot = n;
	for (i = 1; i <= m; ++i)
	{
		x = find(edge[i].x), y = find(edge[i].y);
		if (x != y)
		{
			++ptot;
			fa[ptot] = fa[x] = fa[y] = ptot;
			p[ptot].alt = edge[i].h;
			son[ptot].push_back(x);
			son[ptot].push_back(y);
		}
	}
}
void dfs(int x, int f)
{
	anc[x][0] = f;
	for (int i = 1; i <= 19; ++i)
	{
		anc[x][i] = anc[anc[x][i - 1]][i - 1];
	}
	if (!son[x].size())
	{
		p[x].dis = dis[x];
		return;
	}
	for (int to : son[x])
	{
		dfs(to, x);
		p[x].dis = min(p[x].dis, p[to].dis);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T, i, u, v, l, a, q, k, s, lev, lastans;
	cin >> T;
	while (T--)
	{
		etot = ptot = 0;
		memset(head, 0, sizeof(head));
		memset(anc, 0, sizeof(anc));
		for (i = 1; i <= n * 2; ++i)
		{
			p[i].dis = LLONG_MAX;
			son[i].clear();
		}
		cin >> n >> m;
		for (i = 1; i <= m; ++i)
		{
			cin >> u >> v >> l >> a;
			edge[i] = {.x = u, .y = v, .h = a};
			add(u, v, l), add(v, u, l);
		}
		dijkstra();
		kruskal();
		dfs(ptot, 0);
		p[0].alt = -1;
		cin >> q >> k >> s;
		lastans = 0;
		while (q--)
		{
			cin >> v >> lev;
			v = (v + k * lastans - 1) % n + 1;
			lev = (lev + k * lastans) % (s + 1);
			for (i = 19; i >= 0; --i)
			{
				if (p[anc[v][i]].alt > lev)
				{
					v = anc[v][i];
				}
			}
			cout << (lastans = p[v].dis) << '\n';
		}
	}
	return 0;
}
