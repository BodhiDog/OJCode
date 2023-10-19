// https://zsaskk-rzll.blog.luogu.org/solution-p2391
#include <bits/stdc++.h>
using namespace std;

const int R = 1e6 + 10;
int fa[R], col[R];
int find(int x)
{
	return x == fa[x] ? x : (fa[x] = find(fa[x]));
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, p, q, i, j, l, r, f;
	cin >> n >> m >> p >> q;
	for (i = 1; i <= n; ++i)
	{
		fa[i] = i;
	}
	for (i = m; i >= 1; --i)
	{
		l = ((i * p + q) % n) + 1;
		r = ((i * q + p) % n) + 1;
		if (l > r)
		{
			swap(l, r);
		}
		for (j = r; j >= l;)
		{
			f = find(j);
			if (f == j)
			{
				col[j] = i;
				fa[j] = find(j - 1);
			}
			j = fa[j]; // 用fa[x]表示x后第一个可操作的节点
		}
	}
	for (i = 1; i <= n; ++i)
	{
		cout << col[i] << '\n';
	}
	return 0;
}
