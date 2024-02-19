#include <bits/stdc++.h>
using namespace std;

const int R = 2e5 + 10;
int root, cur;
double ans = DBL_MAX;
template <int K>
class KDT
{
public:
	struct Node
	{
		int son[2];
		double now[K], mn[K], mx[K];
	} t[R];
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
	double dis(int a, int b)
	{
		double res = 0;
		for (int i = 0; i < K; ++i)
		{
			res += (t[a].now[i] - t[b].now[i]) * (t[a].now[i] - t[b].now[i]);
		}
		return res;
	}
	double possans(int k) // 估价函数，可能的最近距离
	{
		if (!k)
		{
			return DBL_MAX;
		}
		double res = 0, x;
		for (int i = 0; i < K; ++i)
		{
			x = max(t[cur].now[i] - t[k].mx[i], 0.0) + max(t[k].mn[i] - t[cur].now[i], 0.0);
			res += x * x;
		}
		return res;
	}
	void update(int k)
	{
		for (int i = 0; i < K; ++i)
		{
			t[k].mn[i] = min(t[k].mn[i], t[cur].mn[i]);
			t[k].mx[i] = max(t[k].mx[i], t[cur].mx[i]);
		}
	}
	void query(int k)
	{
		if (!k)
		{
			return;
		}
		ans = min(ans, dis(k, cur));
		double lans = possans(lc(k)), rans = possans(rc(k));
		if (lans < rans)
		{
			if (lans < ans)
			{
				query(lc(k));
			}
			if (rans < ans)
			{
				query(rc(k));
			}
		}
		else // rans<lans
		{
			if (rans < ans)
			{
				query(rc(k));
			}
			if (lans < ans)
			{
				query(lc(k));
			}
		}
	}
	void insert(int &k, int kd)
	{
		if (!k)
		{
			k = cur;
			return;
		}
		if (t[cur].now[kd] <= t[k].now[kd])
		{
			insert(lc(k), (kd + 1) % K);
		}
		else
		{
			insert(rc(k), (kd + 1) % K);
		}
		update(k);
	}
};
KDT<2> t;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, i;
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> t.t[i].now[0] >> t.t[i].now[1];
		t.t[i].mn[0] = t.t[i].mx[0] = t.t[i].now[0];
		t.t[i].mn[1] = t.t[i].mx[1] = t.t[i].now[1];
	}
	random_shuffle(t.t + 1, t.t + n + 1);
	for (cur = 1; cur <= n; ++cur)
	{
		t.query(root);
		t.insert(root, 0);
	}
	cout << fixed << setprecision(4) << sqrt(ans) << flush;
	return 0;
}
