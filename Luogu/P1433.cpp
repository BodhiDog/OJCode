#include <bits/stdc++.h>
using namespace std;

const int R = 20;
struct
{
	double x, y;
} pos[R];
bool b[R];
int n;
double ans = DBL_MAX, mindis[33000][R];
void dfs(int x, int eaten, double dis, int s)
{
	if (dis >= ans)
	{
		return;
	}
	if (eaten == n)
	{
		ans = min(ans, dis);
		return;
	}
	double len;
	int state;
	for (int i = 1; i <= n; ++i)
	{
		if (!b[i])
		{
			len = sqrt((pos[i].x - pos[x].x) * (pos[i].x - pos[x].x) + (pos[i].y - pos[x].y) * (pos[i].y - pos[x].y));
			state = (s | (1 << (i - 1)));
			if (mindis[state][i] == 0 || mindis[state][i] > dis + len)
			{
				b[i] = true;
				mindis[state][i] = dis + len;
				dfs(i, eaten + 1, dis + len, state);
				b[i] = false;
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int i;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> pos[i].x >> pos[i].y;
	}
	dfs(0, 0, 0, 0);
	cout << fixed << setprecision(2) << ans << '\n';
	return 0;
}
