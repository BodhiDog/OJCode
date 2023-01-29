// https://www.luogu.com.cn/blog/user15019/solution-p1073
#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
int dis[R][3], w[R];
struct Node
{
	int to, toflo, len;
};
vector<Node> v[R][3]; // 由于开成二维vector
bool b[R][3];
// 真·三层图
// 第一层：不买东西
// 第二层：买了一样东西
// 第三层：把买的东西卖出去
void add(int x, int y)
{
	v[x][0].push_back({y, 0, 0});
	v[x][1].push_back({y, 1, 0});
	v[x][2].push_back({y, 2, 0});
}
struct Q
{
	int x, flo;
	// 点编号、层数
	// 由于是SPFA，不用priority_queue，所以不用按照dis进行大小根堆重载
};
void spfa()
{
	memset(dis, -0x3f, sizeof(dis));
	dis[1][0] = 0;
	queue<Q> q;
	q.push({1, 0});
	b[1][0] = true;
	int j, x, flo, to, toflo, len;
	while (!q.empty())
	{
		x = q.front().x;
		flo = q.front().flo;
		q.pop();
		b[x][flo] = false;
		for (j = 0; j < v[x][flo].size(); ++j)
		{
			to = v[x][flo][j].to;
			len = v[x][flo][j].len;
			toflo = v[x][flo][j].toflo;
			if (dis[x][flo] + len > dis[to][toflo])
			{
				dis[to][toflo] = dis[x][flo] + len;
				if (!b[to][toflo])
				{
					q.push({to, toflo});
					b[to][toflo] = true;
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
	int n, m, j, x, y, t, w;
	cin >> n >> m;
	for (j = 1; j <= n; ++j)
	{
		cin >> w;
		v[j][0].push_back({j, 1, -w});
		v[j][1].push_back({j, 2, w});
	}
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y >> t;
		if (t == 1)
			add(x, y);
		else
			add(x, y), add(y, x);
	}
	spfa();
	cout << (dis[n][2] <= 0 ? 0 : dis[n][2]) << '\n';
	return 0;
}