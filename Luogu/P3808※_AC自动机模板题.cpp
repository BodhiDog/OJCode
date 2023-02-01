#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
class AC
{
private:
	int ch[N][27], cnt[N],
		pre[N], tot = 0;
	char s[N];
public:
	void add()
	{
		int x, p = 0;
		for (register int j = 0; s[j]; ++j)
		{
			x = s[j] - 'a';
			if (!ch[p][x])
			{
				++tot;
				ch[p][x] = tot;
			}
			p = ch[p][x];
		}
		++cnt[p];
	}
	void input(int n)
	{
		for (register int j = 1; j <= n; ++j)
		{
			cin >> s;
			add();
		}
	}
	void bfs()
	{
		queue<int> q;
		register int i, j;
		for (i = 0; i < 26; ++i)
		{
			if (ch[0][i])
			{
				q.push(ch[0][i]);
			}
		}
		int from, to;
		while (!q.empty())
		{
			from = q.front();
			for (i = 0; i < 26; ++i)
			{
				to = ch[from][i];
				if (to)
				{
					pre[to] = ch[pre[from]][i];
					q.push(to);
				}
				else
				{
					ch[from][i] = ch[pre[from]][i];
				}
			}
			q.pop();
		}
	}
	void inputar()
	{
		cin >> s;
	}
	int solve() // 这里求法不太一样
	{
		int res = 0, x;
		for (register int i = 0, j = 0; s[i]; ++i) // i,j分别代表对s[]的遍历和对trie的遍历
		{
			x = s[i] - 'a';
			while (!ch[j][x])
			{
				j = pre[j];
			}
			j = ch[j][x];
			res += cnt[j];
			cnt[j] = 0;
		}
		return res;
	}
} ac;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n;
	cin >> n;
	ac.input(n);
	ac.inputar();
	ac.bfs();
	cout << ac.solve();
	return 0;
}