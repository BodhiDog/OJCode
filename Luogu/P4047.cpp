#include <bits/stdc++.h>
using namespace std;

const int R = 1e3 + 10;
struct Edge
{
	int u, v;
	double len;
	bool operator<(const Edge &c) const { return len < c.len; }
} e[R * R];
int fa[R], x[R], y[R];
double dis(int u, int v)
{
	return sqrt((x[u] - x[v]) * (x[u] - x[v]) + (y[u] - y[v]) * (y[u] - y[v]));
}
int find(int x)
{
	return x == fa[x] ? x : fa[x] = find(fa[x]);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, k, i, j, etot = 0, u, v;
	cin >> n >> k;
	int part = n; // 起初都不连通，有n个连通块
	for (j = 1; j <= n; ++j)
	{
		cin >> x[j] >> y[j];
	}
	for (i = 1; i <= n; ++i)
	{
		for (j = i + 1; j <= n; ++j)
		{
			e[++etot] = {i, j, dis(i, j)};
		}
	}
	for (j = 1; j <= n; ++j)
		fa[j] = j;
	sort(e + 1, e + etot + 1);
	for (j = 1; j <= etot; ++j)
	{
		u = find(e[j].u), v = find(e[j].v);
		if (u != v)
		{
			fa[u] = v;
			--part;
			if (part == k)
			{
				break;
			}
		}
	}
	for (; j <= etot; ++j) // 第一个不处在同一集合中的元素
	{
		if (find(e[j].u) != find(e[j].v))
		{
			cout << fixed << setprecision(2) << e[j].len << '\n';
			break;
		}
	}
	return 0;
}
