#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct Edge
{
	int x, y, w;
	bool operator<(const Edge &s) const { return w < s.w; }
} e[R];
int fa[310], etot, maxw, m;
int find(int x) { return x == fa[x] ? x : fa[x] = find(fa[x]); }
void kruskal() // 生成树
{
	for (int j = 1, x, y; j <= m; ++j)
	{
		x = find(e[j].x), y = find(e[j].y);
		if (x != y)
		{
			fa[x] = y;
			++etot;
			maxw = e[j].w;
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, j, x, y, w;
	cin >> n >> m;
	for (j = 1; j <= n; ++j)
		fa[j] = j;
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y >> w;
		e[j] = {x, y, w};
	}
	sort(e + 1, e + m + 1);
	kruskal();
	cout << etot << ' ' << maxw << '\n';
	return 0;
}
