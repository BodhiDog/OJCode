#include <bits/stdc++.h>
using namespace std;

using ll = long long;
struct Node
{
	ll w, h;
	bool operator<(const Node &x) const
	{
		return (w != x.w ? w > x.w : h > x.h); // 注意，这里是w!=x.w，所以为了防止出错最好还是写if
	}
};
priority_queue<Node> q;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ll n, k, x, ans1 = 0, ans2 = 0, maxh;
	register int j;
	cin >> n >> k;
	for (j = 1; j <= n; ++j)
	{
		cin >> x;
		q.push({x, 1}); // 所有点的默认高度为1
	}
	if ((n - 1) % (k - 1)) // 每次取出k个点，又push进1个点，相当于每次取出k-1个点；而q中本来有n个点，最后留下了1个点，所以取出n-1次
	{
		x = (k - 1) - (n - 1) % (k - 1); // 每次取出的结点数-最后一组剩下的结点数=要补充的结点数
		for (j = 1; j <= x; ++j)
		{
			q.push({0, 1}); // 为了不影响结果，将点的权重赋值为0
		}
	}
	while (q.size() > 1)
	{
		maxh = x = 0;
		for (j = 1; j <= k; ++j)
		{
			x += q.top().w;
			maxh = max(maxh, q.top().h);
			q.pop();
		}
		q.push({x, maxh + 1});
		ans1 += x;
		ans2 = max(ans2, maxh);
	}
	cout << ans1 << "\n"
		 << ans2;
	return 0;
}
