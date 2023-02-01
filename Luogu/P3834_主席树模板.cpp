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