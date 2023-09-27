// 开O2比不开O2快10倍。。。
#include <bits/stdc++.h>
using namespace std;

map<int, int> mp; // 映射用
bitset<int(2.1e6 + 10)> res;
vector<int> leftstate[60000];
int s[25], n, tot;
void dfs1(int x, int delta1_2, int state)
{
	if (x == n / 2 + 1)
	{
		if (mp[delta1_2] == 0)
		{
			mp[delta1_2] = ++tot;
		}
		leftstate[mp[delta1_2]].push_back(state);
		return;
	}
	dfs1(x + 1, delta1_2 + s[x], state | (1 << x));
	dfs1(x + 1, delta1_2 - s[x], state | (1 << x));
	dfs1(x + 1, delta1_2, state);
}
void dfs2(int x, int delta2_1, int state)
{
	if (x == n + 1)
	{
		int to_delta1_2 = mp[delta2_1];
		for (int x : leftstate[to_delta1_2])
		{
			res[state | x] = true;
			/*设在dfs1中，数列的前半段划分出的两个集合的和分别为a1，a2
			在dfs2中，数列的后半段划分出的两个集合的和分别为b1，b2
			a1-a2=x（x存在了mp当中）
			b2-b1=x
			根据等式性质，a1+b1=a2+b2
			即，将a1b1、a2b2并起来就可以得到答案了
			将这个状态的答案标记在res数组中*/
		}
		return;
	}
	dfs2(x + 1, delta2_1 + s[x], state | (1 << x));
	dfs2(x + 1, delta2_1 - s[x], state | (1 << x));
	dfs2(x + 1, delta2_1, state);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	int i;
	for (i = 1; i <= n; ++i)
	{
		cin >> s[i];
	}
	dfs1(1, 0, 0);
	dfs2(n / 2 + 1, 0, 0);
	int ans = 0;
	for (i = 1; i <= 2.1e6; ++i)
	{
		ans += res[i];
	}
	cout << ans << '\n';
	return 0;
}