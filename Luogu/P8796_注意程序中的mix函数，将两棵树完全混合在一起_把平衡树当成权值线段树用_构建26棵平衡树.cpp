#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
int tot, root[27];
char ans[R], s[R];
struct
{
	int l, r, pos, key;
} tree[R];
mt19937 rd;
int crt(int pos)
{
	tree[++tot].pos = pos;
	tree[tot].key = rd();
	return tot;
}
void split(int k, int val, int &x, int &y)
{
	if (k == 0)
	{
		x = y = 0;
		return;
	}
	if (tree[k].pos <= val)
	{
		x = k;
		split(tree[x].r, val, tree[x].r, y);
	}
	else
	{
		y = k;
		split(tree[y].l, val, x, tree[y].l);
	}
}
int merge(int x, int y)
{
	if (!x || !y)
		return x + y;
	if (tree[x].key < tree[y].key)
	{
		tree[x].r = merge(tree[x].r, y);
		return x;
	}
	else
	{
		tree[y].l = merge(x, tree[y].l);
		return y;
	}
}
int mix(int x, int y)
{
	if (!x || !y)
		return x + y;
	int a, b; // 其实如果加上if (tree[x].sz < tree[y].sz) swap(x, y);更符合启发式合并的思想，但是实测不写也能过，还能省去pushup
	split(y, tree[x].pos, a, b);
	tree[x].l = mix(tree[x].l, a);
	tree[x].r = mix(tree[x].r, b);
	return x;
}
void dfs(char c, int k)
{
	if (tree[k].l)
		dfs(c, tree[k].l);
	ans[tree[k].pos] = c;
	if (tree[k].r)
		dfs(c, tree[k].r);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, l, r, xa, xb, xc, ya, yb, yc;
	char x, y;
	cin >> s + 1;
	int len = strlen(s + 1), j;
	for (j = 1; j <= len; ++j)
		root[s[j] - 'a'] = merge(root[s[j] - 'a'], crt(j));
	cin >> m;
	for (j = 1; j <= m; ++j)
	{
		cin >> l >> r >> x >> y;
		split(root[x - 'a'], l - 1, xa, xb);
		split(xb, r, xb, xc);
		root[x - 'a'] = merge(xa, xc);
		split(root[y - 'a'], l - 1, ya, yb);
		split(yb, r, yb, yc);
		root[y - 'a'] = merge(merge(ya, mix(yb, xb)), yc);
	}
	for (x = 'a'; x <= 'z'; ++x)
		if (root[x - 'a'])
			dfs(x, root[x - 'a']);
	for (j = 1; j <= len; ++j)
		cout << ans[j];
	cout << '\n';
	return 0;
}