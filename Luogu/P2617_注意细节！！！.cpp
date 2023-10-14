// 所有犯过错的行都已经用注释标注出
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
struct
{
	int son[2], val;
} t[N * 400];
#define lowbit(x) (x & (-x))
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
struct Qry
{
	char op;
	int x, y, k;
} q[N];
vector<int> v;
int n, num, tot, root[N], a[N], ason[N], bson[N], asz, bsz;
void update(int &k, int l, int r, int x, int val)
{
	if (!k)
	{
		k = ++tot;
	}
	t[k].val += val;
	if (l == r)
	{
		return;
	}
	int mid = (l + r) >> 1;
	if (x <= mid)
	{
		update(lc(k), l, mid, x, val);
	}
	else
	{
		update(rc(k), mid + 1, r, x, val);
	}
}
void build()
{
	for (int i = 1, p; i <= n; ++i)
	{
		p = i;
		while (p <= n)
		{
			update(root[p], 0, num, a[i], 1); //
			p += lowbit(p);					  //
		}
	}
}
void update(int x, int v)
{
	int p = x;
	while (p <= n)
	{
		update(root[p], 0, num, v, 1);
		update(root[p], 0, num, a[x], -1);
		p += lowbit(p); //
	}
	a[x] = v;
}
int kth(int l, int r, int k)
{
	if (l == r)
	{
		return l;
	}
	int mid = (l + r) >> 1, sum = 0, i;
	for (i = 1; i <= asz; ++i)
	{
		sum += t[lc(ason[i])].val;
	}
	for (i = 1; i <= bsz; ++i)
	{
		sum -= t[lc(bson[i])].val;
	}
	if (k <= sum)
	{
		for (i = 1; i <= asz; ++i)
		{
			ason[i] = lc(ason[i]);
		}
		for (i = 1; i <= bsz; ++i)
		{
			bson[i] = lc(bson[i]);
		}
		return kth(l, mid, k);
	}
	else
	{
		for (i = 1; i <= asz; ++i)
		{
			ason[i] = rc(ason[i]);
		}
		for (i = 1; i <= bsz; ++i)
		{
			bson[i] = rc(bson[i]);
		}
		return kth(mid + 1, r, k - sum);
	}
}
int query(int l, int r, int k)
{
	asz = bsz = 0;
	int p = r;
	while (p >= 1)
	{
		ason[++asz] = root[p];
		p -= lowbit(p); //
	}
	p = l - 1;
	while (p >= 1)
	{
		bson[++bsz] = root[p];
		p -= lowbit(p); //
	}
	return kth(0, num, k);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, i;
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i];
		v.push_back(a[i]);
	}
	for (i = 1; i <= m; ++i)
	{
		cin >> q[i].op >> q[i].x >> q[i].y;
		if (q[i].op == 'Q')
		{
			cin >> q[i].k;
		}
		else
		{
			v.push_back(q[i].y);
		}
	}

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	num = v.size();
	for (i = 1; i <= n; ++i)
	{
		a[i] = lower_bound(v.begin(), v.end(), a[i]) - v.begin();
	}
	for (i = 1; i <= m; ++i)
	{
		if (q[i].op == 'C') //
		{
			q[i].y = lower_bound(v.begin(), v.end(), q[i].y) - v.begin();
		}
	}

	build();
	for (i = 1; i <= m; ++i)
	{
		if (q[i].op == 'Q')
		{
			cout << v[query(q[i].x, q[i].y, q[i].k)] << '\n';
		}
		else
		{
			update(q[i].x, q[i].y);
		}
	}
	return 0;
}
