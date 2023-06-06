#include <bits/stdc++.h>
using namespace std;

const int R = 2e5 + 10;
struct Q
{
	int l, r, id;
} qst[R];
struct
{
	int lc, rc, pos, l, r;
	// pos代表该[l,r]内 最小数 第一次 出现的位置，l、r代表该子树管理的值域
} t[R * 4];
#define lc(x) t[x].lc
#define rc(x) t[x].rc
int a[R], tot, root;
int ans[R];
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
void update(int k, int val, int pos)
{
	if (t[k].l == t[k].r)
	{
		t[k].pos = pos;
		return;
	}
	int mid = (t[k].l + t[k].r) >> 1;
	if (val <= mid)
		update(lc(k), val, pos);
	else
		update(rc(k), val, pos);
	t[k].pos = min(t[lc(k)].pos, t[rc(k)].pos);
}
int query(int k, int pos)
{
	if (t[k].l == t[k].r)
		return t[k].l;
	int mid = (t[k].l + t[k].r) >> 1;
	if (t[lc(k)].pos < pos)
		return query(lc(k), pos);
	else
		return query(rc(k), pos);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int j, n, m;
	cin >> n >> m;
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j];
	}
	for (j = 1; j <= m; ++j)
	{
		cin >> qst[j].l >> qst[j].r;
		qst[j].id = j;
	}
	build(root, 0, 2e5); // 只建树的框（标出lc rc）
	sort(qst + 1, qst + m + 1, [](Q x, Q y)
		 { return (x.r == y.r) ? (x.l < y.l) : (x.r < y.r); });
	int pos = 0;
	for (j = 1; j <= m; ++j)
	{
		while (pos < qst[j].r)
		{
			++pos;
			update(root, a[pos], pos);
		}
		ans[qst[j].id] = query(root, qst[j].l);
	}
	for (j = 1; j <= m; ++j)
		cout << ans[j] << '\n';
	return 0;
}
