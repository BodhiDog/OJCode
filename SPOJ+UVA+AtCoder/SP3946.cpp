#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
struct
{
	int son[2], val;
} t[N * 40];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
vector<int> v;
int root[N], tot, a[N];
void update(int oldk, int &k, int l, int r, int p, int v)
{
	t[k = ++tot] = t[oldk];
	if (l == r)
	{
		t[k].val += v;
		return;
	}
	int mid = (l + r) >> 1;
	if (p <= mid)
	{
		update(lc(oldk), lc(k), l, mid, p, v);
	}
	else
	{
		update(rc(oldk), rc(k), mid + 1, r, p, v);
	}
	t[k].val = t[lc(k)].val + t[rc(k)].val;
}
int query(int oldk, int k, int l, int r, int x)
{
	if (l == r)
	{
		return l;
	}
	int mid = (l + r) >> 1,
		sum = t[lc(k)].val - t[lc(oldk)].val;
	if (x <= sum)
	{
		return query(lc(oldk), lc(k), l, mid, x);
	}
	else
	{
		return query(rc(oldk), rc(k), mid + 1, r, x - sum);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, j, l, r, k, len;
	cin >> n >> m;
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j];
		v.push_back(a[j]);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	len = v.size();
	for (j = 1; j <= n; ++j)
	{
		update(root[j - 1], root[j], 1, len, lower_bound(v.begin(), v.end(), a[j]) - v.begin() + 1, 1);
	}
	while (m--)
	{
		cin >> l >> r >> k;
		cout << v[query(root[l - 1], root[r], 1, len, k) - 1] << '\n';
	}
	return 0;
}
