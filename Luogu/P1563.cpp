#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
struct
{
	int to;
	string name;
} toy[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, i, to, x, now = 0;
	cin >> n >> m;
	for (i = 0; i < n; ++i)
	{
		cin >> toy[i].to >> toy[i].name;
	}
	for (i = 1; i <= m; ++i)
	{
		cin >> to >> x;
		if (toy[now].to == 0)
		{
			if (to == 0)
			{
				now = (now - x + n) % n;
			}
			else
			{
				now = (now + x) % n;
			}
		}
		else
		{
			if (to == 0)
			{
				now = (now + x) % n;
			}
			else
			{
				now = (now - x + n) % n;
			}
		}
	}
	cout << toy[now].name << '\n';
	return 0;
}