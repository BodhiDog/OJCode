#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
vector<int> son[R];
int n, rd[R], bfn[R];
void topo()
{
	queue<int> q;
	int tme = 0, x;
	for (int i = 1; i <= n; ++i)
	{
		if (rd[i] == 0)
		{
			q.push(i);
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
				q.push(to);
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m1, m2, i, x, y;
	cin >> n >> m1 >> m2;
	for (i = 1; i <= m1; ++i)
	{
		cin >> x >> y;
		son[x].push_back(y);
		++rd[y];
	}
	topo();
	for (i = 1; i <= m2; ++i)
	{
		cin >> x >> y;
		if (bfn[x] < bfn[y])
		{
			cout << x << ' ' << y << '\n';
		}
		else
		{
			cout << y << ' ' << x << '\n';
		}
	}
	return 0;
}
