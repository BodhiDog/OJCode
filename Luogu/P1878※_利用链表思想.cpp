#include <bits/stdc++.h>
using namespace std;

const int R = 2e5 + 10;
bool b[R]; // 男true女false
int a[R], pre[R], ext[R], tot;
char sex[R];
pair<int, int> ans[R];
struct Q
{
	int x, y, d;
	bool operator<(const Q &r) const { return d == r.d ? x > r.x : d > r.d; } // 如果相等的话要按照先后顺序排列
};
priority_queue<Q> q;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, j, x, y;
	cin >> n >> sex + 1;
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j];
		pre[j] = j - 1, ext[j] = j + 1;
	}
	for (j = 1; j < n; ++j)
		if (sex[j] != sex[j + 1])
			q.push({j, j + 1, abs(a[j] - a[j + 1])});
	while (!q.empty())
	{
		x = q.top().x, y = q.top().y;
		q.pop();
		if (!b[x] && !b[y])
		{
			b[x] = true;
			b[y] = true;
			ans[++tot].first = x;
			ans[tot].second = y;
			ext[pre[x]] = ext[y];
			pre[ext[y]] = pre[x];
			if (pre[x] < 1 || ext[y] > n)
				continue;
			if (sex[pre[x]] != sex[ext[y]])
				q.push({pre[x], ext[y], abs(a[pre[x]] - a[ext[y]])});
		}
	}
	cout << tot << '\n';
	for (j = 1; j <= tot; ++j)
		cout << ans[j].first << ' ' << ans[j].second << '\n';
	return 0;
}
