#include <bits/stdc++.h>
using namespace std;

const int R = 110;
struct Edge
{
	int x, y, m;
	bool operator<(const Edge &o) const { return m < o.m; }
} e[R * R];
int fa[R];
int find(int x) { return x == fa[x] ? x : fa[x] = find(fa[x]); }
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, k, j, sum = 0, x, y;
	cin >> n >> k;
	for (j = 1; j <= n; ++j)
		fa[j] = j;
	for (j = 1; j <= k; ++j)
	{
		cin >> e[j].x >> e[j].y >> e[j].m;
		sum += e[j].m;
	}
	sort(e + 1, e + k + 1);
	for (j = 1; j <= k; ++j)
	{
		x = find(e[j].x), y = find(e[j].y);
		if (x != y)
		{
			fa[x] = y;
			sum -= e[j].m;
		}
	}
	cout << sum << '\n';
	return 0;
}
