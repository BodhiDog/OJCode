#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct
{
	int to, next;
} e[R];
struct Node
{
	int p, id;
};
vector<Node> t[R];
vector<int> root;
int head[R], tot, anc[R][20], ans[R], cnt[R];
void add(int x, int y)
{
	e[++tot] = {y, head[x]};
	head[x] = tot;
}
int findanc(int x, int p)
{
	for (int i = 17; i >= 0 && p; --i)
	{
		if (pow(2, i) <= p)
		{
			x = anc[x][i];
			p -= pow(2, i);
		}
	}
	return x;
}
void dfs(int x, int dep)
{
	++cnt[dep];
	for (Node a : t[x]) // 在p级祖先的位置进行操作，就可以知道孩子了
	{
		ans[a.id] = cnt[dep + a.p]; // 我们不清空cnt，所以要记录前缀
	}
	for (int i = head[x], to; i; i = e[i].next)
	{
		to = e[i].to;
		dfs(to, dep + 1);
	}
	for (Node a : t[x])
	{
		ans[a.id] = cnt[dep + a.p] - ans[a.id] - 1;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, v, p, i, j;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> p;
		add(p, i);
		anc[i][0] = p;
		if (p == 0)
		{
			root.push_back(i);
		}
	}
	for (j = 1; j <= 17; ++j)
	{
		for (i = 1; i <= n; ++i)
		{
			anc[i][j] = anc[anc[i][j - 1]][j - 1];
		}
	}
	cin >> m;
	for (i = 1; i <= m; ++i)
	{
		cin >> v >> p;
		t[findanc(v, p)].push_back({p, i});
	}
	for (int r : root)
	{
		dfs(r, 1);
	}
	for (i = 1; i <= m; ++i)
	{
		cout << ans[i] << ' ';
	}
	cout << endl;
	return 0;
}
