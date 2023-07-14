#include <bits/stdc++.h>
using namespace std;

const int R = 1e4 + 10;
struct
{
	int to, next, len;
} e[R * 2];
int head[R * 2], tot;
int qry[110], sz[R], maxsz[R], root, sum, mem[R], cnt, m, dis[R];
bool vis[R], ans[110], judge[int(1e8 + 10)]; // 注意，w*n=1e8而不是1e7！！！ 和根结点距离为first的点是否存在
void add(int x, int y, int w)
{
	e[++tot] = {.to = y, .next = head[x], .len = w};
	head[x] = tot;
}
void getroot(int x, int f)
{
	sz[x] = 1;
	maxsz[x] = 0;
	for (int i = head[x], to; i; i = e[i].next)
	{
		to = e[i].to;
		if (to != f && !vis[to])
		{
			getroot(to, x);
			sz[x] += sz[to];
			maxsz[x] = max(maxsz[x], sz[to]);
		}
	}
	maxsz[x] = max(maxsz[x], sum - sz[x]);
	if (maxsz[x] < maxsz[root])
		root = x;
}
void getdis(int x, int f)
{
	mem[++cnt] = dis[x];
	for (int i = head[x], to; i; i = e[i].next)
	{
		to = e[i].to;
		if (to != f && !vis[to])
		{
			dis[to] = dis[x] + e[i].len;
			getdis(to, x);
		}
	}
}
int sta[R], top = 0;
void solve(int x)
{
	for (int i = head[x], to, j, k; i; i = e[i].next)
	{
		to = e[i].to;
		if (!vis[to])
		{
			cnt = 0;
			dis[to] = e[i].len;
			getdis(to, x);
			for (j = 1; j <= cnt; ++j)
				for (k = 1; k <= m; ++k)
					if (qry[k] >= mem[j])
						ans[k] = (ans[k] | judge[qry[k] - mem[j]]);
			for (j = 1; j <= cnt; ++j)
				judge[sta[++top] = mem[j]] = true;
		}
	}
	while (top)
		judge[sta[top--]] = false;
}
void divide(int x)
{
	vis[x] = judge[0] = true;
	solve(x);
	for (int i = head[x], to; i; i = e[i].next)
	{
		to = e[i].to;
		if (!vis[to])
		{
			maxsz[root = 0] = sum = sz[to];
			getroot(to, 0);
			getroot(root, 0);
			divide(root); // 这些和主函数里一样
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, x, y, j, w;
	cin >> n >> m;
	for (j = 1; j < n; ++j)
	{
		cin >> x >> y >> w;
		add(x, y, w), add(y, x, w);
	}
	for (j = 1; j <= m; ++j)
		cin >> qry[j];
	maxsz[root] = sum = n;
	getroot(1, 0);
	getroot(root, 0); // 如果不加的话复杂度不对
	divide(root);
	for (j = 1; j <= m; ++j)
		cout << (ans[j] ? "AYE\n" : "NAY\n");
	return 0;
}
