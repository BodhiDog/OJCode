#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 1e5 + 10;
struct Edge
{
	int x, y;
	ll len;
	bool operator<(const Edge &oth) const
	{
		return len > oth.len; // 要连接的是边权大的，才能保证剩下的小！！！
	}
} e[R];
int fa[R];
bool emy[R]; // 标记该结点是否连接敌人
int findfa(int x)
{
	return x == fa[x] ? x : fa[x] = findfa(fa[x]);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, k, i, x, y;
	ll ans = 0;
	cin >> n >> k;
	for (i = 1; i <= k; ++i)
	{
		cin >> x;
		emy[x] = true;
	}
	for (i = 1; i < n; ++i)
	{
		cin >> e[i].x >> e[i].y >> e[i].len;
		ans += e[i].len;
	}
	sort(e + 1, e + n);
	for (i = 0; i < n; ++i)
	{
		fa[i] = i;
	}
	for (i = 1; i < n; ++i)
	{
		x = findfa(e[i].x);
		y = findfa(e[i].y);
		if (!(emy[x] && emy[y])) // 不能将两个 都有敌人的 集合合并
		{
			fa[x] = y;
			emy[y] = (emy[x] | emy[y]);
			ans -= e[i].len;
		}
	}
	cout << ans << '\n'; // 总共的-要保留的=要删除的
	return 0;
}
