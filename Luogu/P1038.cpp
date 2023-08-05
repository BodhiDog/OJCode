// 一道很早之前就想做的题，现在终于过了QAQ
// 细节很多
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 110;
struct Edge
{
	int to, next;
	ll len;
} e[R * R];
int head[R * R], tot;
int rd[R], cd[R];
ll c[R], u[R];
void add(int x, int y, ll w)
{
	e[++tot] = {y, head[x], w};
	head[x] = tot;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, p, j, x, y, to;
	ll len;
	cin >> n >> p;
	for (j = 1; j <= n; ++j)
	{
		cin >> c[j] >> u[j];
	}
	for (j = 1; j <= p; ++j)
	{
		cin >> x >> y >> len;
		add(x, y, len);
		++cd[x];
		++rd[y];
	}
	queue<int> q;
	for (j = 1; j <= n; ++j)
	{
		if (rd[j] == 0)
		{
			q.push(j);
		}
	}
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		for (j = head[x]; j; j = e[j].next)
		{
			to = e[j].to, len = e[j].len;
			c[to] += len * c[x];
			--rd[to];
			if (rd[to] == 0)
			{
				c[to] -= u[to];
				if (c[to] > 0) // 只有处于兴奋状态的才向下传递！！！
				{
					q.push(to);
				}
			}
		}
	}
	bool flag = false;
	for (j = 1; j <= n; ++j)
	{
		if (cd[j] == 0 && c[j] > 0)
		{
			flag = true;
			break;
		}
	}
	if (flag)
	{
		for (j = 1; j <= n; ++j)
		{
			if (cd[j] == 0 && c[j] > 0) // 大于0的输出层才输出！！！
			{
				cout << j << ' ' << c[j] << '\n';
			}
		}
	}
	else
	{
		cout << "NULL\n";
	}
	return 0;
}
