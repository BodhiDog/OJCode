// 参考https://www.luogu.com.cn/blog/hkr04/solution-p4168
#include <bits/stdc++.h>
using namespace std;

const int N = 4e4 + 10, B = 210;
vector<int> v;
int a[N], mj[B][B], cnt[B][N], bucket[N], sz, L[B], R[B];
// mj[x][y]：在块区间[x,y]之间的众数
// cnt[i][j]：在块[1,i]之间j出现的次数（离散化后）
#define getblock(x) ((x - 1) / sz + 1)
void build(int n, int sum)
{
	sz = sqrt(n);
	int tot = (n % sz ? n / sz + 1 : n / sz), i, j, k, maxa;
	for (i = 1; i <= tot; ++i)
	{
		for (j = (i - 1) * sz + 1; j <= min(n, i * sz); ++j)
		{
			++cnt[i][a[j]];
		}
		for (j = 0; j < sum; ++j)
		{
			cnt[i][j] += cnt[i - 1][j];
		}
	}
	for (i = 1; i <= tot; ++i)
	{
		for (j = i; j <= tot; ++j)
		{
			maxa = mj[i][j - 1];
			for (k = (j - 1) * sz + 1; k <= min(n, j * sz); ++k)
			{
				if (cnt[j][a[k]] - cnt[i - 1][a[k]] > cnt[j][maxa] - cnt[i - 1][maxa] ||
					(cnt[j][a[k]] - cnt[i - 1][a[k]] == cnt[j][maxa] - cnt[i - 1][maxa] && a[k] < maxa))
				{
					maxa = a[k];
				}
			}
			mj[i][j] = maxa;
		}
		L[i] = (i - 1) * sz + 1;
		R[i] = i * sz;
	}
}
int query(int l, int r) // 值域[0,sum)
{
	int lb = getblock(l), rb = getblock(r) /*所在的块*/, mina = INT_MAX, maxa = -1, res, i, precnt, curcnt;
	if (lb == rb || lb + 1 == rb) // 没有包含一个完整的块
	{
		for (i = l; i <= r; ++i)
		{
			++bucket[a[i]];
			mina = min(mina, a[i]);
			maxa = max(maxa, a[i]);
		}
		res = mina;
		for (i = mina; i <= maxa; ++i)
		{
			if (bucket[i] > bucket[res])
			{
				res = i;
			}
		}
		fill(bucket + mina, bucket + maxa + 1, 0);
	}
	else
	{
		for (i = l; i <= R[lb]; ++i)
		{
			++bucket[a[i]];
			mina = min(mina, a[i]);
			maxa = max(maxa, a[i]);
		}
		for (i = L[rb]; i <= r; ++i)
		{
			++bucket[a[i]];
			mina = min(mina, a[i]);
			maxa = max(maxa, a[i]);
		}
		res = mj[lb + 1][rb - 1]; // 已经钦定一个默认答案，下面处理整块中和两端的答案加起来是否会更新
		for (i = l; i <= R[lb]; ++i)
		{
			precnt = bucket[res] + cnt[rb - 1][res] - cnt[lb + 1 - 1][res];
			curcnt = bucket[a[i]] + cnt[rb - 1][a[i]] - cnt[lb + 1 - 1][a[i]];
			if (curcnt > precnt || (curcnt == precnt && a[i] < res))
			{
				res = a[i];
			}
		}
		for (i = L[rb]; i <= r; ++i)
		{
			precnt = bucket[res] + cnt[rb - 1][res] - cnt[lb + 1 - 1][res];
			curcnt = bucket[a[i]] + cnt[rb - 1][a[i]] - cnt[lb + 1 - 1][a[i]];
			if (curcnt > precnt || (curcnt == precnt && a[i] < res))
			{
				res = a[i];
			}
		}
		fill(bucket + mina, bucket + maxa + 1, 0);
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, j, l, r, lastans = 0, sum;
	cin >> n >> m;
	for (j = 1; j <= n; ++j)
	{
		cin >> a[j];
		v.push_back(a[j]);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	sum = v.size();
	for (j = 1; j <= n; ++j)
	{
		a[j] = lower_bound(v.begin(), v.end(), a[j]) - v.begin(); // 值域[0,sum)
	}
	build(n, sum);
	for (j = 1; j <= m; ++j)
	{
		cin >> l >> r;
		l = (l + lastans - 1) % n + 1;
		r = (r + lastans - 1) % n + 1;
		if (l > r)
			swap(l, r);
		cout << (lastans = v[query(l, r)]) << '\n';
	}
	return 0;
}
