#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 1e5 + 10, MOD = 1e9 + 7;
vector<int> son[R];
int dfn[R], low[R], tme, sta[R], top, gcnt;
ll minw[R], cnt[R], w[R];
bool insta[R];
void tarjan(int x)
{
	dfn[x] = low[x] = ++tme;
	sta[++top] = x;
	insta[x] = true;
	for (int to : son[x])
	{
		if (!dfn[to])
		{
			tarjan(to);
			low[x] = min(low[x], low[to]);
		}
		else if (insta[to])
		{
			low[x] = min(low[x], dfn[to]);
		}
	}
	if (low[x] == dfn[x])
	{
		++gcnt;
		while (sta[top] != x)
		{
			if (w[sta[top]] == minw[gcnt])
			{
				++cnt[gcnt];
			}
			if (w[sta[top]] < minw[gcnt])
			{
				minw[gcnt] = w[sta[top]];
				cnt[gcnt] = 1;
			}
			insta[sta[top]] = false;
			--top;
		}
		if (w[sta[top]] == minw[gcnt])
		{
			++cnt[gcnt];
		}
		else if (w[sta[top]] < minw[gcnt])
		{
			minw[gcnt] = w[sta[top]];
			cnt[gcnt] = 1;
		}
		insta[sta[top]] = false;
		--top;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	memset(minw, 0x3f, sizeof(minw));
	int n, m, j, x, y;
	cin >> n;
	for (j = 1; j <= n; ++j)
	{
		cin >> w[j];
	}
	cin >> m;
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y;
		son[x].push_back(y);
	}
	for (j = 1; j <= n; ++j)
	{
		if (!dfn[j])
		{
			tarjan(j);
		}
	}
	ll ans1 = 0, ans2 = 1;
	for (j = 1; j <= gcnt; ++j)
	{
		ans1 += minw[j];
	}
	for (j = 1; j <= gcnt; ++j)
	{
		ans2 = ans2 * cnt[j] % MOD;
	}
	cout << ans1 << ' ' << ans2 << '\n';
	return 0;
}
