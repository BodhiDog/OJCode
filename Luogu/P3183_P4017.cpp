// 注意细微差别
// P3183
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10, M = 2e5 + 10;
struct Edge
{
	int to, next;
} e[M];
int head[M], tot;
void add(int x, int y)
{
	e[++tot] = {.to = y, .next = head[x]};
	head[x] = tot;
}
int mem[N];
bool b[N];
int dfs(int x, int f)
{
	b[x] = true;
	if (mem[x])
		return mem[x];
	if (head[x] == 0)
	{
		if (f == 0)
			return 0; // 是孤点
		return 1;
	}
	for (int i = head[x], to; i; i = e[i].next)
	{
		to = e[i].to;
		mem[x] += dfs(to, x);
	}
	return mem[x];
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, x, y, ans = 0;
	cin >> n >> m;
	while (m--)
	{
		cin >> x >> y;
		add(x, y);
	}
	for (int x = 1; x <= n; ++x)
		if (!b[x])
		{
			ans += dfs(x, 0);
		}
	// for (int x = 1; x <= n; ++x)
	// 	cout << mem[x] << ' ';
	cout << ans << '\n';
	return 0;
}

// P4017
#include <bits/stdc++.h>
using namespace std;

const int N = 5e3 + 10, M = 5e5 + 10, MOD = 80112002;
struct Edge
{
	int to, next;
} e[M];
int head[M], tot, du[N]; // 入度
void add(int x, int y)
{
	e[++tot] = {.to = y, .next = head[x]};
	head[x] = tot;
}
int mem[N];
bool b[N];
int dfs(int x)
{
	b[x] = true;
	if (mem[x])
		return mem[x] % MOD;
	if (head[x] == 0)
		return 1;
	for (int i = head[x], to; i; i = e[i].next)
	{
		to = e[i].to;
		mem[x] = (mem[x] + dfs(to)) % MOD;
	}
	return mem[x] % MOD;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	// freopen("test.txt", "r", stdin);
	int n, m, x, y, ans = 0;
	cin >> n >> m;
	while (m--)
	{
		cin >> x >> y;
		add(x, y);
		++du[y];
	}
	for (x = 1; x <= n; ++x)
		if (!du[x])
		{
			ans = (ans + dfs(x)) % MOD;
		}
	cout << ans << '\n';
	return 0;
}