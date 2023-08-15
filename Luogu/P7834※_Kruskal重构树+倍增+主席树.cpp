#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10, M = 5e5 + 10;
class HJT
{
public:
	struct
	{
		int son[2], val;
	} t[(N + M) * 40];
	int root[N + M], tot;
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
	void pushup(int k)
	{
		t[k].val = t[lc(k)].val + t[rc(k)].val;
	}
	void build(int &k, int l, int r)
	{
		k = ++tot;
		if (l == r)
		{
			return;
		}
		int mid = (l + r) >> 1;
		build(lc(k), l, mid);
		build(rc(k), mid + 1, r);
	}
	void update(int oldk, int &k, int l, int r, int p, int v)
	{
		k = ++tot;
		t[k] = t[oldk];
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
		pushup(k);
	}
	int query(int oldk, int k, int l, int r, int q)
	{
		if (l == r)
		{
			return l;
		}
		int mid = (l + r) >> 1,
			sum = t[lc(k)].val - t[lc(oldk)].val;
		if (q <= sum)
		{
			return query(lc(oldk), lc(k), l, mid, q);
		}
		else
		{
			return query(rc(oldk), rc(k), mid + 1, r, q - sum);
		}
	}
#undef lc
#undef rc
} seg;
struct Edge
{
	int x, y, w;
	bool operator<(const Edge &oth) const
	{
		return w < oth.w;
	}
} edge[M];
struct
{
	int to, next;
} e[M * 4];
struct Node
{
	int val, leftb, rightb; // leftb/rightb并非h[]中的（真实的）下标，是在dfs中访问顺序的下标
	Node() { leftb = INT_MAX, rightb = INT_MIN; }
} p[N + M];
vector<int> hh;
int head[N + M], etot, n, m, h[N], htot, tot, fa[N + M], rd[N + M], leafcnt, anc[N + M][21];
// rd方便DFS的时候看哪些结点是根
int find(int x) { return x == fa[x] ? x : fa[x] = find(fa[x]); }
void add(int x, int y)
{
	e[etot] = {y, head[x]};
	head[x] = etot++;
}
void kruskal()
{
	tot = n;
	sort(edge + 1, edge + m + 1);
	int i, x, y;
	for (i = 1; i <= m; ++i)
	{
		x = find(edge[i].x), y = find(edge[i].y);
		if (x != y)
		{
			++tot;
			p[tot].val = edge[i].w;
			fa[tot] = fa[x] = fa[y] = tot;
			add(tot, x), add(tot, y);
			++rd[x], ++rd[y];
		}
	}
}
void dfs(int x, int f)
{
	int i, to;
	anc[x][0] = f;
	for (i = 1; i <= 20; ++i)
	{
		anc[x][i] = anc[anc[x][i - 1]][i - 1];
	}
	if (head[x] == -1)
	{
		p[x].leftb = p[x].rightb = ++leafcnt;
		seg.update(seg.root[leafcnt - 1], seg.root[leafcnt], 1, htot, h[x], 1);
		// 由于在新建结点前，原序列的点与重构树的叶子结点一一对应，所以可以直接使用结点编号作为h的下标
		return;
	}
	for (i = head[x]; ~i; i = e[i].next)
	{
		to = e[i].to;
		dfs(to, x);
		p[x].leftb = min(p[x].leftb, p[to].leftb);
		p[x].rightb = max(p[x].rightb, p[to].rightb);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	memset(head, -1, sizeof(head));
	int q, i, x, u, k, l, r, lastans = 0;
	cin >> n >> m >> q;
	for (i = 1; i <= n; ++i)
	{
		cin >> h[i];
		hh.push_back(h[i]);
		fa[i] = i;
	}
	sort(hh.begin(), hh.end());
	hh.erase(unique(hh.begin(), hh.end()), hh.end());
	htot = hh.size();
	for (i = 1; i <= n; ++i)
	{
		h[i] = lower_bound(hh.begin(), hh.end(), h[i]) - hh.begin() + 1;
	}
	for (i = 1; i <= m; ++i)
	{
		cin >> edge[i].x >> edge[i].y >> edge[i].w;
	}
	kruskal();
	for (i = 1; i <= tot; ++i)
	{
		if (!rd[i])
		{
			dfs(i, 0);
		}
	}
	p[0].val = INT_MAX;
	while (q--)
	{
		cin >> u >> x >> k;
		u = (u ^ lastans) % n + 1;
		x = x ^ lastans;
		k = (k ^ lastans) % n + 1;
		for (i = 20; i >= 0; --i)
		{
			if (anc[u][i] && p[anc[u][i]].val <= x)
			{
				u = anc[u][i];
			}
		}
		l = p[u].leftb, r = p[u].rightb;
		if (r - l + 1 < k)
		{
			lastans = 0;
			cout << "-1\n";
		}
		else
		{
			cout << (lastans = hh[seg.query(seg.root[l - 1], seg.root[r], 1, htot, r - l + 1 - k + 1) - 1]) << '\n';
			// 题目要第k大，但是主席树维护第k小，第len-k+1小=第k大
		}
	}
	return 0;
}
