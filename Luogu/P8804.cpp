#include <bits/stdc++.h>
using namespace std;

const int R = 50;
double p[R], event[R][R]; // event[故障][现象]
bool err[R];
struct Ans
{
	int id;
	double p;
	bool operator<(const Ans &oth) const
	{
		return p == oth.p ? id < oth.id : p > oth.p;
	}
} ans[R];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m, k, i, j, x;
	double sum = 0; // 故障总概率
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
	{
		cin >> p[i];
		p[i] /= 100.0;
	}
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= m; ++j)
		{
			cin >> event[i][j];
			event[i][j] /= 100.0;
		}
	}
	cin >> k;
	for (i = 1; i <= k; ++i)
	{
		cin >> x;
		err[x] = true;
	}
	for (i = 1; i <= n; ++i) // 本题不是简单的知道贝叶斯然后直接计算，因为故障的现象之间是独立的
	{
		ans[i].id = i;
		ans[i].p = p[i];		 // 这里相当于分子上的P(故障)
		for (j = 1; j <= m; ++j) // 计算对于故障i，有多大的概率出现err数组所呈现的情况，相当于求分子上的P(现象丨故障)。注意，这里所说的“现象”不是单个event[i][j]，而是综合出现的现象
		{
			if (err[j])
			{
				ans[i].p *= event[i][j];
			}
			else
			{
				ans[i].p *= (1 - event[i][j]);
			}
		}
		sum += ans[i].p; // 由于计算的是“综合现象”，所以所有的P(现象)都是sum
	}
	sort(ans + 1, ans + n + 1);
	for (i = 1; i <= n; ++i)
	{
		cout << ans[i].id << ' ' << fixed << setprecision(2) << ans[i].p * 100.0 / sum << '\n';
	}
	return 0;
}
