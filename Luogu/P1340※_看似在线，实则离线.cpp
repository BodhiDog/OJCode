#include <bits/stdc++.h>
using namespace std;

const int R = 6e3 + 10;
struct Edge
{
	int x, y, v, week;
	bool operator<(const Edge &e) const { return v < e.v; }
} e[R];
int fa[210], ans[R], n, w;
int find(int x) { return x == fa[x] ? x : fa[x] = find(fa[x]); }
int kruskal(int week)
{
	int etot = 0, tot = 0, j, x, y;
	for (j = 1; j <= n; ++j)
		fa[j] = j;
	for (j = 1; j <= w; ++j)
	{
		if (etot == n - 1)
			break;
		x = find(e[j].x), y = find(e[j].y);
		if (x != y && e[j].week <= week)
		{
			fa[x] = y;
			++etot;
			tot += e[j].v;
		}
	}
	return etot < n - 1 ? -1 : tot;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int j;
	cin >> n >> w;
	for (j = 1; j <= w; ++j)
	{
		cin >> e[j].x >> e[j].y >> e[j].v;
		e[j].week = j;
	}
	sort(e + 1, e + w + 1);
	for (j = w; j >= 1; --j)
	{
		ans[j] = kruskal(j);
		if (ans[j] == -1)
		{
			while (j >= 1)
			{
				ans[j--] = -1;
			}
			break;
		}
	}
	for (j = 1; j <= w; ++j)
		cout << ans[j] << '\n';
	return 0;
}
