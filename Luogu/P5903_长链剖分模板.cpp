#include <bits/stdc++.h>
using namespace std;

using ui = unsigned int;
using ll = long long;
const int R = 5e5 + 10;
ui s;
inline ui get(ui x)
{
	x ^= x << 13;
	x ^= x >> 17;
	x ^= x << 5;
	return s = x;
}
struct
{
	int lson, dep, maxdep, head;
} t[R];
int anc[R][20];
vector<int> son[R], up[R], down[R];
void dfs1(int x)
{
	int dep = t[anc[x][0]].dep + 1;
	t[x].dep = t[x].maxdep = dep;
	for (int i = 1; i <= log2(dep); ++i)
		anc[x][i] = anc[anc[x][i - 1]][i - 1];
	for (int to : son[x])
	{
		dfs1(to);
		if (t[to].maxdep > t[x].maxdep)
		{
			t[x].lson = to;
			t[x].maxdep = t[to].maxdep;
		}
	}
}
void dfs2(int x, int head)
{
	t[x].head = head;
	if (x == head)
	{
		for (int i = 0, k = x; i <= t[x].maxdep - t[x].dep && k; ++i)
		{
			up[x].push_back(k);
			k = anc[k][0];
		}
		for (int i = 0, k = x; i <= t[x].maxdep - t[x].dep; ++i)
		{
			down[x].push_back(k);
			k = t[k].lson;
		}
	}
	if (t[x].lson)
	{
		dfs2(t[x].lson, head);
		for (int to : son[x])
			if (to != t[x].lson)
				dfs2(to, to);
	}
}
int query(int x, int k)
{
	if (k == 0)
		return x;
	int lg = log2(k);
	x = anc[x][lg], k -= (1 << lg);
	k -= t[x].dep - t[t[x].head].dep, x = t[x].head;
	return (k >= 0 ? up[x][k] : down[x][-k]);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, q, root, i;
	ui x, k;
	ll lastans = 0, ans = 0;
	cin >> n >> q >> s;
	for (i = 1; i <= n; ++i)
	{
		cin >> anc[i][0];
		if (anc[i][0] == 0)
			root = i;
		son[anc[i][0]].push_back(i);
	}
	t[root].dep = 1;
	dfs1(root);
	dfs2(root, root);
	for (i = 1; i <= q; ++i)
	{
		x = ((get(s) ^ lastans) % n) + 1;
		k = (get(s) ^ lastans) % t[x].dep;
		lastans = query(x, k);
		ans ^= i * lastans;
	}
	cout << ans << '\n';
	return 0;
}
