#include <bits/stdc++.h>
using namespace std;

const int N = 5010, M = 2e5 + 10;
class PLT // Persistant Leftist Tree
{
public:
	struct
	{
		int lc, rc, fa, dis;
		double val;
	} t[M * 40];
#define lc(k) t[k].lc
#define rc(k) t[k].rc
	int root[N], tot = 0;
	int newnode(int fa, double val)
	{
		t[++tot] = {0, 0, fa, 0, val};
		return tot;
	}
	int merge(int x, int y)
	{
		if (!x || !y)
		{
			return x | y;
		}
		if (t[x].val > t[y].val)
		{
			swap(x, y);
		}
		int k = ++tot;
		t[k] = t[x];
		rc(k) = merge(rc(k), y);
		if (t[lc(k)].dis < t[rc(k)].dis)
		{
			swap(lc(k), rc(k));
		}
		t[k].dis = t[rc(k)].dis + 1;
		return k;
	}
} h;
struct Que
{
	int x;
	double dis;
	bool operator<(const Que &oth) const
	{
		return dis > oth.dis;
	}
};
class G
{
public:
	struct
	{
		int to, nxt;
		double len;
	} e[M];
	int head[N], tot = 0;
	void add(int x, int y, double len)
	{
		e[++tot] = {y, head[x], len};
		head[x] = tot;
	}
} to, rev;
int n, frome[N], s[N];
double dis[N];
bool b[N];
void dijkstra()
{
	priority_queue<Que> q;
	q.push({n, 0});
	fill(dis, dis + N, 1e15);
	dis[n] = 0;
	int x, i, y;
	double len;
	while (!q.empty())
	{
		x = q.top().x;
		q.pop();
		if (!b[x])
		{
			b[x] = true;
			for (i = rev.head[x]; i; i = rev.e[i].nxt)
			{
				y = rev.e[i].to;
				len = rev.e[i].len;
				if (dis[x] + len < dis[y])
				{
					dis[y] = dis[x] + len;
					frome[y] = i; // 最后一次更新的一定是最短的，所以直接赋值
					q.push({y, dis[y]});
				}
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	Que temp;
	int m, i, j, x, y, ans;
	double E, len;
	cin >> n >> m >> E;
	for (i = 1; i <= m; ++i)
	{
		cin >> x >> y >> len;
		if (x == n) // 这些以n作为起点的边没有意义
		{
			--i, --m;
			continue;
		}
		to.add(x, y, len);
		rev.add(y, x, len);
	}
	dijkstra();
	for (i = 1; i <= n; ++i)
	{
		s[i] = i;
	}
	sort(s + 1, s + n + 1, [](int &a, int &b) -> bool
		 { return dis[a] < dis[b]; });
	for (i = 1; i <= n; ++i)
	{
		x = s[i];
		for (j = to.head[x]; j; j = to.e[j].nxt)
		{
			if (frome[x] != j) // 是非树边
			{
				y = to.e[j].to;
				len = to.e[j].len;
				h.root[x] = h.merge(h.root[x], h.newnode(y, len + dis[y] - dis[x]));
			}
		}
		h.root[x] = h.merge(h.root[x], h.root[to.e[frome[x]].to]);
	}
	E -= dis[1];
	if (E < 0)
	{
		cout << "0\n";
		return 0;
	}
	ans = 1;
	priority_queue<Que> q; // 这里x的意义是堆中的结点
	if (h.root[1])
	{
		q.push({h.root[1], h.t[h.root[1]].val});
	}
	while (!q.empty())
	{
		temp = q.top();
		q.pop();
		E -= temp.dis + dis[1];
		if (E < 0)
		{
			break;
		}
		++ans;
		if (h.lc(temp.x))
		{
			q.push({h.lc(temp.x), temp.dis - h.t[temp.x].val + h.t[h.lc(temp.x)].val});
		}
		if (h.rc(temp.x))
		{
			q.push({h.rc(temp.x), temp.dis - h.t[temp.x].val + h.t[h.rc(temp.x)].val});
		}
		if (h.root[h.t[temp.x].fa])
		{
			q.push({h.root[h.t[temp.x].fa], temp.dis + h.t[h.root[h.t[temp.x].fa]].val});
		}
	}
	cout << ans << '\n';
	return 0;
}
