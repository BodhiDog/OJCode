// 普通离散化
#include <bits/stdc++.h>
using namespace std;

const int R = 2e5 + 10;
struct Node
{
	int l, r, sum;
} tree[R * 40];
int a[R], read(), root[R], tot;
vector<int> v;
void insert(int &k, int l, int r, int lastv, int pos)
{
	tree[++tot] = tree[lastv];
	k = tot;
	++tree[k].sum;
	if (l == r)
		return;
	int mid = (l + r) >> 1;
	if (pos <= mid)
		insert(tree[k].l, l, mid, tree[lastv].l, pos);
	else
		insert(tree[k].r, mid + 1, r, tree[lastv].r, pos);
}
int query(int l, int r, int lastvl, int lastvr, int k)
{
	if (l == r)
		return l;
	int mid = (l + r) >> 1;
	int sum = tree[tree[lastvr].l].sum - tree[tree[lastvl].l].sum;
	if (k <= sum)
		return query(l, mid, tree[lastvl].l, tree[lastvr].l, k);
	else
		return query(mid + 1, r, tree[lastvl].r, tree[lastvr].r, k - sum);
}
int getpos(int val) { return lower_bound(v.begin(), v.end(), val) - v.begin() + 1; } // 返回值在[1,len]范围内
int main()
{
	int n = read(), m = read();
	int j;
	for (j = 1; j <= n; ++j)
		v.push_back(a[j] = read());
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	for (j = 1; j <= n; ++j)
		insert(root[j], 1, n, root[j - 1], getpos(a[j]));
	int l, r, k;
	for (j = 1; j <= m; ++j)
	{
		l = read(), r = read(), k = read();
		printf("%d\n", v[query(1, n, root[l - 1], root[r], k) - 1]); // 在这里，query的返回值是[1,len]，而v的下标从0开始，所以要-1
	}
	return 0;
}
int read()
{
	bool fh = true;
	char c = getchar();
	while (!isdigit(c))
	{
		if (c == '-')
			fh = !fh;
		c = getchar();
	}
	int x = 0;
	while (isdigit(c))
	{
		x = (x << 1) + (x << 3) + (c ^ 48);
		c = getchar();
	}
	return (fh ? x : -x);
}

// map离散化
#include <bits/stdc++.h>
using namespace std;

const int R = 2e5 + 10;
struct
{
	int son[2], val;
} t[R * 40];
struct Org
{
	int val, pos;
} a[R];
unordered_map<int, int> atomp, mptoa;
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
int root[R], tot;
void pushup(int k) { t[k].val = t[lc(k)].val + t[rc(k)].val; }
void update(int oldk, int &k, int l, int r, int p, int x)
{
	k = ++tot;
	t[k] = t[oldk];
	if (l == r)
	{
		t[k].val += x;
		return;
	}
	int mid = (l + r) >> 1;
	if (p <= mid)
		update(lc(oldk), lc(k), l, mid, p, x);
	else
		update(rc(oldk), rc(k), mid + 1, r, p, x);
	pushup(k);
}
int query(int oldk, int k, int l, int r, int p)
{
	if (l == r)
		return l;
	int sum = t[lc(k)].val - t[lc(oldk)].val, mid = (l + r) >> 1; // 是左孩子的大小而不是当前点的大小！！！
	if (sum >= p)
		return query(lc(oldk), lc(k), l, mid, p);
	else
		return query(rc(oldk), rc(k), mid + 1, r, p - sum);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, l, r, k, i;
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
	{
		cin >> a[i].val;
		a[i].pos = i;
	}
	// map
	sort(a + 1, a + n + 1, [](Org &u, Org &v)
		 { return u.val < v.val; });
	int tot = 0;
	a[0].val = INT_MAX; // 如果有0，那么在一开始代码就停止了，就不对了，所以要给一个不可能的值
	for (i = 1; i <= n; ++i)
	{
		if (a[i].val == a[i - 1].val)
			continue;
		++tot;
		atomp[a[i].val] = tot;
		mptoa[tot] = a[i].val;
	}
	// build
	sort(a + 1, a + n + 1, [](Org &u, Org &v)
		 { return u.pos < v.pos; });
	for (i = 1; i <= n; ++i)
	{
		root[i] = root[i - 1];
		update(root[i - 1], root[i], 1, n, atomp[a[i].val], 1);
	}
	// query
	while (m--)
	{
		cin >> l >> r >> k;
		cout << mptoa[query(root[l - 1], root[r], 1, n, k)] << '\n';
	}
	return 0;
}
