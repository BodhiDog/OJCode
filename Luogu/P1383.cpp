#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct
{
	int son[2], l, r;
	char c;
} t[R * 40];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
int root[R], len[R], tot;
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
void update(int oldk, int &k, int p, char c)
{
	k = ++tot;
	t[k] = t[oldk];
	if (t[k].l == t[k].r)
	{
		t[k].c = c;
		return;
	}
	int mid = (t[k].l + t[k].r) >> 1;
	if (p <= mid)
		update(lc(oldk), lc(k), p, c);
	else
		update(rc(oldk), rc(k), p, c);
}
char query(int k, int p)
{
	if (t[k].l == t[k].r)
		return t[k].c;
	int mid = (t[k].l + t[k].r) >> 1;
	if (p <= mid)
		return query(lc(k), p);
	else
		return query(rc(k), p);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, x;
	char op, c;
	cin >> n;
	build(root[0], 1, n);
	len[0] = 0;
	for (int j = 1, edit = 0; j <= n; ++j)
	{
		cin >> op;
		if (op == 'T')
		{
			++edit;
			cin >> c;
			len[edit] = len[edit - 1] + 1;
			update(root[edit - 1], root[edit], len[edit], c);
		}
		else if (op == 'U')
		{
			++edit;
			cin >> x;
			len[edit] = len[edit - x - 1];
			root[edit] = root[edit - x - 1];
			// 撤销0次，就相当于不撤销，然而我们已经开出了一次新的修改，所以还要额外-1
		}
		else
		{
			cin >> x;
			cout << query(root[edit], x) << '\n';
		}
	}
	return 0;
}
