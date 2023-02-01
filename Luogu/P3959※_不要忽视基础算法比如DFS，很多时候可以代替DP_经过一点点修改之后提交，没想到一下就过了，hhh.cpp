#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int R = 15, INF = 0x7f7f7f7f;
int n, len[R][R], kdis[R], kthp[R];
vector<int> v[R];
// 一种奇妙的存图方式：将len存在另一个数组中
// 好处：便于重边的最优性选择（去重）
ll ans = LLONG_MAX;
int cnt;
void dfs(int lastk, int lastj, int tot, ll sum)
{	// 上一个是谁拓展的和这一次拓展谁无关，所以不用传fa
	// lastj表示上一次递归找到的j是谁
	++cnt;
	if (tot == n)
	{
		ans = min(ans, sum);
		return;
	}
	for (int k = lastk; k <= tot; ++k) // 选择由第k个被扩展过的点开始扩展，即循环的是扩展次序
	{
		int from = kthp[k];
		if (!kdis[from]) // 未扩展过
			continue;
		for (int j = lastj; j < v[from].size(); ++j) // 扩展谁，循环的是点编号在vector中的次序
		{
			int to = v[from][j];
			if (kdis[to] || sum + len[from][to] * kdis[from] >= ans)
				continue;
			kdis[to] = kdis[from] + 1;
			kthp[tot + 1] = to;
			dfs(k, j + 1, tot + 1, sum + len[from][to] * kdis[from]);
			kdis[to] = 0;
			kthp[tot + 1] = 0;
		}
		lastj = 0;
		// 为什么第一次k的循环有特权呢？
		// 想一下，上一次循环的是以v[from]这一行开始循环的，也就是说v[from][lastj]以及这一行之前的数字都已经搜完了，无需继续搜了
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, x, y, l, j, t;
	cin >> n >> m;
	memset(len, 0x7f, sizeof(len));
	for (j = 1; j <= m; ++j)
	{
		cin >> x >> y >> l;
		if (l >= len[x][y])
			continue;
		else if (len[x][y] == INF)
		{
			len[x][y] = len[y][x] = l;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		len[x][y] = len[y][x] = min(len[x][y], l);
	}
	for (int i = 1; i <= n; ++i)
	{
		sort(v[i].begin(), v[i].end(), [&](int a, int b) -> bool
			 { return len[i][a] < len[i][b]; }); // 优化搜索顺序
	}
	for (j = 1; j <= n; ++j)
	{
		kdis[j] = 1;
		kthp[1] = j;
		dfs(1, 0, 1, 0);
		kdis[j] = 0;
		kthp[1] = 0;
	}
	cout << ans << '\n';
	return 0;
}
