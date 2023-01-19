#include <bits/stdc++.h>
using namespace std;

const int R = 1e6 + 10;
struct Qry
{
	int x, y;
} a[R], b[R]; // 题目中说所有约束条件要同时满足，所以要分开处理
int fa[R << 1];
vector<int> v;
unordered_map<int, int> pos;
int act(int x) { return (fa[x] == x ? x : (fa[x] = act(fa[x]))); }
void merge(int x, int y) { fa[act(y)] = act(x); }
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T, n = 0, j, c, ak, bk, x, y;
	bool flag;
	cin >> T;
	while (T--)
	{
		flag = true;
		v.clear(), pos.clear();
		ak = bk = 0;
		cin >> n;
		for (j = 1; j <= n; ++j)
		{
			cin >> x >> y >> c;
			if (c == 0)
				b[++bk].x = x, b[bk].y = y;
			else
				a[++ak].x = x, a[ak].y = y;
			v.push_back(x), v.push_back(y);
		}
		sort(v.begin(), v.end());
		v.erase(unique(v.begin(), v.end()), v.end());
		for (j = 0; j <= (v.size() << 1); ++j)
			fa[j] = j;
		for (j = 0; j < v.size(); ++j)
			pos[v[j]] = j;
		for (j = 1; j <= ak; ++j)
			merge(pos[a[j].x], pos[a[j].y]);
		for (j = 1; j <= bk; ++j)
			if (act(pos[b[j].x]) == act(pos[b[j].y]))
			{
				flag = false;
				break;
			}
		cout << (flag ? "YES\n" : "NO\n");
	}
	return 0;
}