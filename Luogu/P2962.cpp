#include <bits/stdc++.h>
using namespace std;

using ll = long long;
map<ll, int> step;
int n, ans = INT_MAX;
ll e[40], tar;
void dfs1(int x, int tot, ll state)
{
	if (x > n / 2)
	{
		if (!step[state] && state) // 第一次更新时要保证state是一个操作过的。如果state全是0并且tot还不是0，那么这就一定不是最优解
		{
			step[state] = tot;
		}
		else
		{
			step[state] = min(tot, step[state]);
		}
		return;
	}
	dfs1(x + 1, tot, state);
	dfs1(x + 1, tot + 1, state ^ e[x]);
}
void dfs2(int x, int tot, ll state)
{
	if (x > n)
	{
		if (step[state ^ tar] || state == tar) // 在dfs1中找到了与当前状态对应的状态，或者仅进行dfs2就找到了一个可行解时，更新答案
		{
			ans = min(ans, step[state ^ tar] + tot);
		}
		return;
	}
	dfs2(x + 1, tot, state);
	dfs2(x + 1, tot + 1, state ^ e[x]);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, a, b, j;
	cin >> n >> m;
	for (j = 1; j <= n; ++j)
	{
		e[j] = (1ll << j); // 1要强制转换！！！j开成ll也不行！！！
		tar |= e[j];
	}
	for (j = 1; j <= m; ++j)
	{
		cin >> a >> b;
		e[a] = (e[a] | (1ll << b));
		e[b] = (e[b] | (1ll << a));
	}
	dfs1(1, 0, 0);
	dfs2(n / 2 + 1, 0, 0);
	cout << ans << '\n';
	return 0;
}
