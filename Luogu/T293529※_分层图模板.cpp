#include <bits/stdc++.h>
using namespace std;

const int R = 1e4 + 5, K = 25;
using ll = long long;
struct Edge
{
	int to;
	ll len;
};
struct Q
{
	int p, times;
	ll sum;
	bool operator<(const Q &oth) const
	{
		return sum > oth.sum;
	}
};
int k;
ll dis[R][K];
bool b[R][K];
vector<Edge> v[R];
void dj()
{
	priority_queue<Q> q;
	int from, to, times;
	ll sum, len;
	memset(dis, 0x3f, sizeof(dis));
	dis[1][0] = 0;
	q.push(Q{1, 0, 0});
	register int j;
	while (!q.empty())
	{
		from = q.top().p;
		times = q.top().times;
		sum = q.top().sum;
		q.pop();
		if (!b[from][times])
		{
			b[from][times] = true; // 标记更新过
			dis[from][times] = sum;
			for (j = 0; j < int(v[from].size()); ++j)
			{
				to = v[from][j].to;
				len = v[from][j].len;
				if (sum + len < dis[to][times])
				{
					q.push({to, times, sum + len});
				}
				if (times < k && sum < dis[to][times + 1])
				{
					q.push({to, times + 1, sum});
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
	int n, m, x, y;
	ll len;
	cin >> n >> m >> k;
	register int j;
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y >> len;
		v[x].push_back({y, len});
		v[y].push_back({x, len});
	}
	dj();
	ll ans = LLONG_MAX;
	for (j = 0; j <= k; ++j)
	{
		ans = min(ans, dis[n][j]);
	}
	cout << ans;
	return 0;
}
