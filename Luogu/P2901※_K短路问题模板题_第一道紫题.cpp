#include <bits/stdc++.h>
using namespace std;

#define reg register int
	const int N = 1e3 + 10;
struct Node
{
	int point, len;
	bool operator<(const Node &x) const
	{
		return len > x.len;
	}
};
struct ASN
{
	int point, guess, len;
	bool operator<(const ASN &x) const
	{
		return guess > x.guess;
	}
};
vector<Node> v[N], p[N];
bool b[N];
int pre[N], ans[110], tot, cnt[N], maxk, k = 1;
inline void dijkstra(int start)
{
	priority_queue<Node> q;
	memset(pre, 0x3f, sizeof(pre));
	pre[start] = 0;
	int from, to, sz;
	reg j;
	q.push({start, 0});
	while (!q.empty())
	{
		from = q.top().point;
		q.pop();
		b[from] = true;
		sz = p[from].size();
		for (j = 0; j < sz; ++j)
		{
			to = p[from][j].point;
			if (!b[to] && pre[from] + p[from][j].len < pre[to])
			{
				pre[to] = pre[from] + p[from][j].len;
				q.push({to, pre[to]});
			}
		}
	}
}
inline void astar(int start, int end)
{
	priority_queue<ASN> q;
	ASN temp;
	memset(ans, -1, sizeof(ans));
	q.push({start, pre[start], 0});
	int from, to, len, sz;
	reg j;
	while (!q.empty())
	{
		temp = q.top();
		from = temp.point;
		len = temp.len;
		++cnt[from];
		q.pop();
		if (cnt[end] == k)
		{
			++tot;
			ans[tot] = len;
			++k;
			if (k > maxk)
			{
				return;
			}
		}
		sz = v[from].size();
		for (j = 0; j < sz; ++j)
		{
			to = v[from][j].point;
			if (cnt[to] < k)
			{
				q.push({to, len + v[from][j].len + pre[to], len + v[from][j].len});
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, x, y, len;
	cin >> n >> m >> maxk;
	reg j;
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y >> len;
		v[x].push_back({y, len});
		p[y].push_back({x, len});
	}
	dijkstra(1);
	astar(n, 1);
	for (j = 1; j <= maxk; ++j)
	{
		cout << ans[j] << "\n";
	}
	return 0;
}
