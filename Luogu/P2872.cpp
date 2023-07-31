#include <bits/stdc++.h>
using namespace std;

const int R = 1e3 + 10;
struct Edge
{
	int u, v;	// 点编号
	double len; // 两点间距离
	bool operator<(const Edge &a) const { return len < a.len; }
} e[R * R];
double x[R], y[R];
int tot;
double dis(double x1, double y1, double x2, double y2) // 参数顺序千万别弄错！！！
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
void add(int u, int v, double len)
{
	e[++tot] = {
		.u = u,
		.v = v,
		.len = len};
}
int fa[R];
int find(int a) { return a == fa[a] ? a : fa[a] = find(fa[a]); }
void merge(int a, int b)
{
	a = find(a), b = find(b);
	if (a != b)
		fa[a] = b;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, i, j, a, b;
	cin >> n >> m;
	for (j = 1; j <= n; ++j)
		fa[j] = j;
	for (j = 1; j <= n; ++j)
		cin >> x[j] >> y[j];
	for (j = 1; j <= m; ++j)
	{
		cin >> a >> b;
		add(a, b, dis(x[a], y[a], x[b], y[b]));
		merge(a, b);
	}
	// cout << '\n';
	for (i = 1; i <= n; ++i)
		for (j = i + 1; j <= n; ++j)
			if (find(i) != find(j))
			{
				add(i, j, dis(x[i], y[i], x[j], y[j])); // 参数顺序千万别弄错！！！
				// cout << i << ' ' << j << ' ' << x[i] << ' ' << y[i] << ' ' << x[j] << ' ' << y[j] << ' ' << dis(x[i], y[i],x[j],  y[j]) << '\n';
			}
	double ans = 0;
	sort(e + 1, e + tot + 1);
	for (j = 1; j <= tot; ++j)
	{
		// cout << e[j].u << ' ' << e[j].v << ' ' << double(e[j].len) << '\n';
		if (find(e[j].u) != find(e[j].v))
		{
			// cout << e[j].u << ' ' << e[j].v << ' ' << double(e[j].len) << '\n';
			ans += double(e[j].len);
			merge(e[j].u, e[j].v);
		}
	}
	cout << fixed << setprecision(2) << ans << '\n';
	return 0;
}
