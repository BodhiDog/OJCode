#include <bits/stdc++.h>
using namespace std;

const int R = 1e4 + 10;
int dis[R][15];
struct Edge
{
	int to, len;
};
vector<Edge> v[R];
struct Q
{
	int p, times, sum;
	bool operator<(const Q &x) const { return sum > x.sum; }
};
bool b[R][15];
priority_queue<Q> q;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, k, s, t, x, y, len;
	cin >> n >> m >> k >> s >> t;
	int j;
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y >> len;
		v[x].push_back({y, len});
		v[y].push_back({x, len});
	}
	// DJ
	int to, times, sum;
	memset(dis, 0x3f, sizeof(dis));
	dis[s][0] = 0;
	q.push({s, 0, 0});
	while (!q.empty())
	{
		x = q.top().p;
		times = q.top().times;
		sum = q.top().sum;
		q.pop();
		if (!b[x][times])
		{
			b[x][times] = true;
			for (j = 0; j < v[x].size(); ++j)
			{
				to = v[x][j].to;
				len = v[x][j].len;
				if (sum + len < dis[to][times])
				{
					dis[to][times] = sum + len;
					q.push({to, times, dis[to][times]});
				}
				if (times < k && sum < dis[to][times + 1])
				{
					dis[to][times + 1] = sum;
					q.push({to, times + 1, dis[to][times + 1]});
				}
			}
		}
	}
	int ans = INT_MAX;
	for (j = 0; j <= k; ++j)
	{
		ans = min(ans, dis[t][j]);
	}
	cout << ans;
	return 0;
}