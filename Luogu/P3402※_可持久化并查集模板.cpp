#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10, M = 2e5 + 10;
struct
{
	int son[2], l, r, val;
} t[N * 2 * 2 + M * 17 * 2];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
int rootfa[M], rootdep[M], tot; // dep按秩合并用
void build(int &k, int l, int r)
{
	k = ++tot;
	t[k].l = l, t[k].r = r;
	if (l == r)
		return;
	int mid = (l + r) >> 1;
	build(lc(k), l, mid);
	build(rc(k), mid + 1, r);
}
void update(int oldk, int &k, int p, int x)
{
	k = ++tot;
	t[k] = t[oldk];
	if (t[k].l == t[k].r)
	{
		t[k].val = x;
		return;
	}
	int mid = (t[k].l + t[k].r) >> 1;
	if (p <= mid)
		update(lc(oldk), lc(k), p, x);
	else
		update(rc(oldk), rc(k), p, x);
}
int query(int k, int p)
{
	if (t[k].l == t[k].r)
		return t[k].val;
	int mid = (t[k].l + t[k].r) >> 1;
	if (p <= mid)
		return query(lc(k), p);
	else
		return query(rc(k), p);
}
int find(int ver, int x)
{
	int fa = query(rootfa[ver], x);
	return fa == x ? x : find(ver, fa);
	// 如果路径压缩，那每一个路径上的结点都要新开一条链
	// 最坏情况：前1e5次构建一条链，后边一直以1e5次为版本对根和叶进行查询，那么就要1e5（询问）*1e5（深度，链上的所有节点）*log(1e5)个结点，MLE
}
void merge(int ver, int x, int y)
{
	x = find(ver, x), y = find(ver, y); // 这里直接给xy赋值了！！！因为合并的时候并的是根！！！
	if (x == y)
	{
		rootfa[ver] = rootfa[ver - 1];
		rootdep[ver] = rootdep[ver - 1];
		return;
	}
	int depx = query(rootdep[ver - 1], x), depy = query(rootdep[ver - 1], y);
	if (depx < depy)
	{
		update(rootfa[ver - 1], rootfa[ver], x, y);
		rootdep[ver] = rootdep[ver - 1];
	}
	else if (depx > depy)
	{
		update(rootfa[ver - 1], rootfa[ver], y, x);
		rootdep[ver] = rootdep[ver - 1];
	}
	else
	{
		update(rootfa[ver - 1], rootfa[ver], x, y);
		update(rootdep[ver - 1], rootdep[ver], y, depy + 1);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, a, b, k;
	char op;
	cin >> n >> m;
	build(rootfa[0], 1, n);
	build(rootdep[0], 1, n);
	for (int i = 1; i <= n; ++i)
		update(rootfa[0], rootfa[0], i, i);
	for (int ver = 1; ver <= m; ++ver)
	{
		cin >> op;
		if (op == '1')
		{
			cin >> a >> b;
			rootfa[ver] = rootfa[ver - 1];
			merge(ver, a, b);
		}
		else if (op == '2')
		{
			cin >> k;
			rootfa[ver] = rootfa[k];
			rootdep[ver] = rootdep[k];
		}
		else
		{
			cin >> a >> b;
			rootfa[ver] = rootfa[ver - 1];
			rootdep[ver] = rootdep[ver - 1];
			cout << (find(ver, a) == find(ver, b) ? "1\n" : "0\n");
		}
	}
	return 0;
}