#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 70, M = 1000;
struct
{
	int to, next, cap, cost;
} e[M * 2];
struct
{
	ll x, y;
} p[N];
map<string, int> mp;
ll k;
int head[N], tot, n, s, t, pre[N][N], dis[N], ans, last[N], flow[N];
bool sex[N], inq[N];
ll distsqr(int a, int b)
{
	return (p[a].x - p[b].x) * (p[a].x - p[b].x) + (p[a].y - p[b].y) * (p[a].y - p[b].y);
}
void add(int x, int y, int cap, int cost)
{
	e[tot] = {y, head[x], cap, cost};
	head[x] = tot++;
}
bool check(int a, int b)
{
	if (sex[a] == sex[b] || distsqr(a, b) > k * k)
	{
		return false;
	}
	ll x1 = p[a].x, y1 = p[a].y,
	   x2 = p[b].x, y2 = p[b].y,
	   xi, yi;
	for (int i = 1; i <= n * 2; ++i)
	{
		xi = p[i].x, yi = p[i].y;
		if (i != a && i != b &&
			(yi - y1) * (x2 - x1) == (xi - x1) * (y2 - y1) &&
			min(x1, x2) <= xi && xi <= max(x1, x2) &&
			min(y1, y2) <= yi && yi <= max(y1, y2))
		{
			return false;
		}
	}
	return true;
}
void tolower(string &s)
{
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}
	}
}
bool spfa()
{
	memset(inq, 0, sizeof(inq));
	fill(dis, dis + N, -0x3f3f3f3f);
	dis[s] = 0;
	queue<int> q;
	q.push(s);
	flow[s] = 0x3f3f3f3f;
	inq[s] = true;
	int x, to, i, len, cap;
	while (!q.empty())
	{
		x = q.front();
		inq[x] = false;
		q.pop();
		for (i = head[x]; ~i; i = e[i].next)
		{
			to = e[i].to;
			cap = e[i].cap;
			len = e[i].cost;
			if (cap > 0 && dis[x] + len > dis[to])
			{
				flow[to] = min(flow[x], cap);
				last[to] = i;
				dis[to] = dis[x] + len;
				if (!inq[to])
				{
					q.push(to);
					inq[to] = true;
				}
			}
		}
	}
	return dis[t] != -0x3f3f3f3f;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	memset(head, -1, sizeof(head));
	int i, j, x;
	string p1, p2;
	cin >> k >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> p[i].x >> p[i].y >> p1;
		tolower(p1);
		sex[mp[p1] = i] = true;
	}
	for (i = n + 1; i <= n * 2; ++i)
	{
		cin >> p[i].x >> p[i].y >> p1;
		tolower(p1);
		sex[mp[p1] = i] = false;
	}
	while (cin >> p1)
	{
		if (p1 == "End")
		{
			break;
		}
		cin >> p2 >> x;
		tolower(p1), tolower(p2);
		if (check(mp[p1], mp[p2]))
		{
			if (mp[p1] > mp[p2])
			{
				swap(p1, p2);
			}
			pre[mp[p1]][mp[p2]] = x;
		}
	}

	s = 0, t = n * 2 + 1;
	for (i = 1; i <= n; ++i)
	{
		add(s, i, 1, 0);
		add(i, s, 0, 0);
		for (j = n + 1; j <= n * 2; ++j)
		{
			if (distsqr(i, j) <= k * k)
			{
				if (pre[i][j] == 0)
				{
					add(i, j, 1, 1);
					add(j, i, 0, -1);
				}
				else
				{
					add(i, j, 1, pre[i][j]);
					add(j, i, 0, -pre[i][j]);
				}
			}
		}
		add(i + n, t, 1, 0);
		add(t, i + n, 0, 0);
	}
	while (spfa())
	{
		ans += flow[t] * dis[t];
		x = t;
		while (x != s)
		{
			i = last[x];
			e[i].cap -= flow[t];
			e[i ^ 1].cap += flow[t];
			x = e[i ^ 1].to;
		}
	}
	cout << ans << '\n';
	return 0;
}
