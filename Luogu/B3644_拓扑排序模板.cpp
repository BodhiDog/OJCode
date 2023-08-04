#include <bits/stdc++.h>
using namespace std;

vector<int> son[110], ans;
queue<int> q;
int rd[110];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, j, x, y;
	cin >> n;
	for (j = 1; j <= n; ++j)
	{
		while (true)
		{
			cin >> y;
			if (y == 0)
				break;
			son[j].push_back(y);
			++rd[y];
		}
	}
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
		ans.push_back(x);
		for (int to : son[x])
		{
			--rd[to];
			if (rd[to] == 0)
			{
				q.push(to);
			}
		}
	}
	for (int x : ans)
	{
		cout << x << ' ';
	}
	return 0;
}
