// 结论：一个二分图存在且仅存在一个完美匹配时，必定有点的度为1。可通过从一个点开始加边来体会和证明
#include <bits/stdc++.h>
using namespace std;

const int N = 2e6 + 10, M = 4e6 + 10;
struct
{
	int to, nxt;
} e[M];
int head[N], tot, n, du[N];
bool del[N];
void add(int x, int y)
{
	e[++tot] = {y, head[x]};
	head[x] = tot;
}
int topo()
{
	queue<int> q;
	int i, x, delcnt = 0, cur, to;
	for (i = 1; i <= 2 * n; ++i)
	{
		if (du[i] == 1)
		{
			q.push(i);
		}
	}
	while (!q.empty())
	{
		x = q.front();
		cur = 0;
		q.pop();
		if (!del[x])
		{
			del[x] = true;
			++delcnt;
			for (i = head[x]; i; i = e[i].nxt) // 由于x的度为1，所以一定仅存在一条边与它相连。现在就是要找到这条边
			{
				to = e[i].to;
				if (!del[to])
				{
					cur = to;
					break;
				}
			}
			del[cur] = true;
			++delcnt;
			for (i = head[cur]; i; i = e[i].nxt)
			{
				to = e[i].to;
				--du[to];
				if (du[to] == 1)
				{
					q.push(to);
				}
			}
		}
	}
	return delcnt;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T, m, i, x, y;
	cin >> T;
	while (T--)
	{
		memset(head, 0, sizeof(head));
		memset(del, 0, sizeof(del));
		memset(du, 0, sizeof(du));
		tot = 0;
		cin >> n >> m;
		for (i = 1; i <= m; ++i)
		{
			cin >> x >> y;
			y += n;
			add(x, y);
			add(y, x);
			++du[x], ++du[y];
		}
		cout << (topo() == n * 2 ? "Renko\n" : "Merry\n");
	}
	return 0;
}
