// 感谢https://www.luogu.com.cn/blog/wjyyy/solution-p4172
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10, M = 1e5 + 10;
class
{
public:
	struct Node
	{
		int son[2], fa, val, res, resid;
		bool revtag;
	} t[N + M];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define fa(k) t[k].fa
#define isrc(k) (rc(fa(k)) == k)
#define notroot(k) (lc(fa(k)) == k || rc(fa(k)) == k)
#define connect(x, f, k) t[x].fa = f, t[f].son[k] = x
#define reverse(k) t[k].revtag ^= 1, swap(lc(k), rc(k))
	void pushup(int k)
	{
		t[k].res = t[k].val;
		t[k].resid = k;				 // 先钦定该节点
		if (t[lc(k)].res > t[k].res) // 下面再更新
		{
			t[k].res = t[lc(k)].res;
			t[k].resid = t[lc(k)].resid;
		}
		if (t[rc(k)].res > t[k].res)
		{
			t[k].res = t[rc(k)].res;
			t[k].resid = t[rc(k)].resid;
		}
	}
	void pushdown(int k)
	{
		if (t[k].revtag)
		{
			reverse(lc(k));
			reverse(rc(k));
			t[k].revtag = false;
		}
	}
	void pushdownall(int k)
	{
		if (notroot(k))
		{
			pushdownall(fa(k));
		}
		pushdown(k);
	}
	void rotate(int x)
	{
		int f = fa(x), ff = fa(f), k = isrc(x);
		if (notroot(f))
		{
			t[ff].son[isrc(f)] = x;
		}
		fa(x) = ff;
		connect(t[x].son[k ^ 1], f, k);
		connect(f, x, k ^ 1);
		pushup(f), pushup(x);
	}
	void splay(int x)
	{
		pushdownall(x);
		int f;
		while (notroot(x))
		{
			f = fa(x);
			if (notroot(f))
			{
				isrc(x) ^ isrc(f) ? rotate(x) : rotate(f);
			}
			rotate(x);
		}
	}
	void access(int x)
	{
		for (int y = 0; x; y = x, x = fa(x))
		{
			splay(x);
			rc(x) = y;
			pushup(x);
		}
	}
	void makeroot(int x)
	{
		access(x);
		splay(x);
		reverse(x);
	}
	int findroot(int x)
	{
		access(x);
		splay(x);
		while (lc(x))
		{
			x = lc(x);
		}
		splay(x);
		return x;
	}
	void link(int x, int y)
	{
		makeroot(x);
		fa(x) = y;
	}
	void cut(int x, int y)
	{
		makeroot(x);
		access(y);
		splay(y);
		splay(x);
		rc(x) = fa(y) = 0;
		pushup(x);
	}
	void split(int x, int y)
	{
		makeroot(x);
		access(y);
		splay(y);
	}
#undef fa
} lct;
struct
{
	int k, x, y, ans;
} qry[M];
struct Edge
{
	int x, y, len;
	bool flag;
	bool operator<(const Edge &oth) const
	{
		return len < oth.len;
	}
} e[M];
int n, m, fa[N], eid[N][N];
int findfa(int x) { return fa[x] == x ? x : fa[x] = findfa(fa[x]); }
void kruskal()
{
	int i, x, y, fx, fy, k;
	for (i = 1; i <= n; ++i)
	{
		fa[i] = i;
	}
	for (i = 1; i <= m; ++i)
	{
		x = e[i].x, y = e[i].y;
		fx = findfa(x), fy = findfa(y);
		if (!e[i].flag && fx != fy)
		{
			k = n + i; // 边结点作为n+i
			lct.link(x, k), lct.link(k, y);
			fa[fy] = fx;
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int q, x, y, i, k;
	cin >> n >> m >> q;
	for (i = 1; i <= m; ++i)
	{
		cin >> e[i].x >> e[i].y >> e[i].len;
	}
	sort(e + 1, e + m + 1); // 注意这里！！！防止排序前后对不上
	for (i = 1; i <= m; ++i)
	{
		x = e[i].x, y = e[i].y;
		eid[x][y] = eid[y][x] = i;
		k = n + i;
		lct.t[k].val = lct.t[k].res = e[i].len;
		lct.t[k].resid = k;
	}
	for (i = 1; i <= q; ++i)
	{
		cin >> k >> x >> y;
		qry[i] = {k, x, y};
		if (k == 2)
		{
			e[eid[x][y]].flag = true;
		}
	}
	kruskal();
	for (i = q; i >= 1; --i)
	{
		x = qry[i].x, y = qry[i].y;
		lct.split(x, y);
		if (qry[i].k == 1)
		{
			qry[i].ans = lct.t[y].res;
		}
		else
		{
			if (lct.t[eid[x][y] + n].val < lct.t[y].res) // 可能需要更新才更新
			{
				k = lct.t[y].resid;
				lct.cut(e[k - n].x, k), lct.cut(k, e[k - n].y);
				k = n + eid[x][y];
				lct.link(x, k), lct.link(k, y);
			}
		}
	}
	for (i = 1; i <= q; ++i)
	{
		if (qry[i].k == 1)
		{
			cout << qry[i].ans << '\n';
		}
	}
	return 0;
}
