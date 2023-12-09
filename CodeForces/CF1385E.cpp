#include <bits/stdc++.h>
using namespace std;

const int R = 2e5 + 10;
struct
{
	int op, x, y;
} e[R];
vector<int> son[R];
int n, rd[R], bfn[R];
bool topo()
{
	queue<int> q;
	int tme = 0, x, tot = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (rd[i] == 0)
		{
			q.push(i);
			++tot;
			bfn[i] = ++tme;
		}
	}
	while (!q.empty())
	{
		x = q.front();
		q.pop();
		for (int to : son[x])
		{
			--rd[to];
			if (rd[to] == 0)
			{
				bfn[to] = ++tme;
				++tot;
				q.push(to);
			}
		}
	}
	return tot == n; // 每个点都遍历到了
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T, m, i;
	cin >> T;
	while (T--)
	{
		memset(rd, 0, sizeof(rd));
		memset(bfn, 0, sizeof(bfn));
		cin >> n >> m;
		for (i = 1; i <= n; ++i)
		{
			son[i].clear();
		}
		for (i = 1; i <= m; ++i)
		{
			cin >> e[i].op >> e[i].x >> e[i].y;
			if (e[i].op == 1)
			{
				++rd[e[i].y];
				son[e[i].x].push_back(e[i].y);
			}
		}
		if (topo())
		{
			cout << "YES\n";
			for (i = 1; i <= m; ++i)
			{
				if (e[i].op == 1)
				{
					cout << e[i].x << ' ' << e[i].y << '\n';
				}
				else
				{
					if (bfn[e[i].x] < bfn[e[i].y])
					{
						cout << e[i].x << ' ' << e[i].y << '\n';
					}
					else
					{
						cout << e[i].y << ' ' << e[i].x << '\n';
					}
				}
			}
		}
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}
