#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
#define lowbit(x) (x & (-x))
int ts[R], te[R], n;
void update(int p, int t[])
{
	while (p <= n)
	{
		t[p] += 1;
		p += lowbit(p);
	}
}
int query(int p, int t[])
{
	int res = 0;
	while (p > 0)
	{
		res += t[p];
		p -= lowbit(p);
	}
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, l, r;
	char op;
	cin >> n >> m;
	while (m--)
	{
		cin >> op >> l >> r;
		if (op == '1')
		{
			update(l, ts);
			update(r, te);
		}
		else
			cout << query(r, ts) - query(l - 1, te) << '\n';
		// 区间[l,r]的种类数=所有在[1,r]范围内开头的数量-[1,l-1]范围内结尾的数量
		// 即：可能包含的-不可能的包含的=一定包含的
	}
	return 0;
}
