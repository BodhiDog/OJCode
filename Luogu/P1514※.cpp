// 作者: Bodhi  公开 发表时间: 2022-08-11 16:02
#include <bits/stdc++.h>
using namespace std;

const int R = 510,
		  xx[] = {0, 1, 0, -1},
		  yy[] = {1, 0, -1, 0};
struct Pos
{
	int x, y;
};
struct Edge
{
	int l, r;
	Edge() { l = R, r = -1; }
	bool operator<(const Edge &oth) const
	{
		return l == oth.l ? r > oth.r : l < oth.l;
	}
} e[R];
// struct Node
//{
//	int l, r, id;
//	Node(int a, int b = 0, int c = 0)
//	{
//		l = a, r = b, id = c;
//	}
//	bool operator<(const Node &oth) const
//	{
//		return l < oth.l;
//	}
// };
int n, m, h[R][R], l[R][R], r[R][R];
bool vis[R][R];
// class ODT
//{
// public:
//	set<Node> s;
//	auto split(int pos)
//	{
//		auto it = s.lower_bound(Node(pos));
//		if (it != s.end() && it->l == pos)
//		{
//			return it;
//		}
//		--it;
//		int l = it->l, r = it->r, id = it->id;
//		s.erase(it);
//		s.insert(Node(l, pos - 1, id));
//		return s.insert(Node(pos, r, id)).first;
//	}
//	void assign(int l, int r, int id)
//	{
//		auto it2 = split(r + 1), it1 = split(l);
//		s.erase(it1, it2);
//		s.insert(Node(l, r, id));
//	}
//	int getans()
//	{
//		for (Node x : s)
//		{
//			cnt[x.id] = true;
//		}
//		int res = 0;
//		for (int i = 1; i <= m; ++i)
//		{
//			res += cnt[i];
//		}
//		return res;
//	}
// } odt;
void dfs(int x, int y)
{
	vis[x][y] = true;
	for (int i = 0, tx, ty; i < 4; ++i)
	{
		tx = x + xx[i];
		ty = y + yy[i];
		if (tx >= 1 && tx <= n && ty >= 1 && ty <= m && h[x][y] > h[tx][ty])
		{
			if (!vis[tx][ty])
			{
				dfs(tx, ty);
			}
			l[x][y] = min(l[x][y], l[tx][ty]);
			r[x][y] = max(r[x][y], r[tx][ty]);
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	memset(l, 0x3f, sizeof(l));
	memset(r, -1, sizeof(r));
	cin >> n >> m;
	int i, j, ans = 0, lastr, maxr;
	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= m; ++j)
		{
			cin >> h[i][j];
			if (i == n)
			{
				l[i][j] = r[i][j] = j;
			}
		}
	}
	for (i = 1; i <= m; ++i)
	{
		if (!vis[1][i])
		{
			dfs(1, i);
		}
	}
	bool flag = true;
	for (i = 1; i <= m; ++i)
	{
		if (!vis[n][i])
		{
			flag = false;
			break;
		}
	}
	if (flag)
	{
		cout << "1\n";
		for (i = 1; i <= m; ++i)
		{
			e[i].l = l[1][i];
			e[i].r = r[1][i];
		}
		// 线段完全覆盖区间问题https://blog.csdn.net/ny_Dacong/article/details/130772929
		// 感谢这篇题解提供的区间连续性证明思路https://www.luogu.com.cn/blog/ctq1999/ti-xie-p1514-yin-shui-ru-cheng
		sort(e + 1, e + m + 1);
		lastr = maxr = e[1].r;
		ans = 1;
		for (i = 2; i <= m && e[i].l != 0x3f3f3f3f; ++i)
		{
			if (e[i].l > lastr + 1) // lastr+1表示上一个右端点+1，即新的线段必须要达到的左端点
			{
				lastr = maxr;
				++ans;
			}
			maxr = max(maxr, e[i].r);
		}
		if (lastr != m)
		{
			++ans;
		}
		cout << ans << '\n';
		// sort(e + 1, e + m + 1); // 按照区间长度排序
		// odt.s.insert(Node(1, m, 0));
		// i = 1;
		// while (e[i].r == -1)
		// {
		// 	++i;
		// }
		// for (; i <= m; ++i)
		// {
		// 	odt.assign(e[i].l, e[i].r, e[i].id);
		// }
		// cout << odt.getans() << '\n';
		/*感谢谷队
		反例：
		1------------
		2			  ---
		3			 	  ---
		4					  ---
		5					 	  ---------------------------
		6----------------
		7 ------------------
		按照区间长度排序的话，对于这种情况，我的做法答案是5（34567），但实际上4条线段就可以了（3456）
		*/
	}
	else
	{
		cout << "0\n";
		for (i = 1; i <= m; ++i)
		{
			if (!vis[n][i])
			{
				++ans;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}

// P1514
// #include <bits/stdc++.h>
// using namespace std;

// #define reg register int
// const int R = 510,
// 		  xx[5] = {0, 0, 1, 0, -1},
// 		  yy[5] = {0, 1, 0, -1, 0};
// struct Node
// {
// 	int x, y, z;
// 	bool operator<(const Node &a) const
// 	{
// 		if (x != a.x)
// 			return x < a.x;
// 		else
// 			return y < a.y;
// 	}
// } t[R];
// int a[R][R], n, m, tot, dp[R][2]; // 区间总数tot
// bool b[R][R];
// queue<Node> q;
// inline Node bfs(int sy) // 返回值中的x表示左端点，y表示右端点
// {
// 	q.push({1, sy});
// 	b[1][sy] = true;
// 	int tx, ty, x, y, my = INT_MAX, mxy = -1;
// 	Node temp;
// 	reg j;
// 	while (!q.empty())
// 	{
// 		temp = q.front();
// 		q.pop();
// 		x = temp.x;
// 		y = temp.y;
// 		for (j = 1; j <= 4; ++j)
// 		{
// 			tx = x + xx[j];
// 			ty = y + yy[j];
// 			if (tx >= 1 && tx <= n && ty >= 1 && ty <= m &&
// 				a[tx][ty] < a[x][y] && !b[tx][ty])
// 			{
// 				q.push({tx, ty});
// 				b[tx][ty] = true;
// 			}
// 		}
// 		if (x == n)
// 		{
// 			my = min(my, y);
// 			mxy = max(mxy, y);
// 		}
// 	}
// 	if (mxy == -1)
// 	{
// 		return {-1, -1};
// 	}
// 	return {my, mxy, sy};
// }
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);
// 	freopen("test.txt", "r", stdin);
// 	freopen("test2.txt", "w", stdout);
// 	cin >> n >> m;
// 	reg i, j;
// 	priority_queue<Node> q;
// 	for (j = 1; j <= m; ++j)
// 	{
// 		cin >> a[1][j];
// 		q.push({a[1][j], j});
// 	}
// 	for (i = 2; i <= n; ++i)
// 	{
// 		for (j = 1; j <= m; ++j)
// 		{
// 			cin >> a[i][j];
// 		}
// 	}
// 	while (!q.empty())
// 	{
// 		j = q.top().y;
// 		if (!b[1][j])
// 		{
// 			t[++tot] = bfs(j);
// 			if (t[tot].x == -1 && t[tot].y == -1)
// 			{
// 				--tot;
// 			}
// 		}
// 		q.pop();
// 	}
// 	int ans = 0;
// 	for (j = 1; j <= m; ++j)
// 	{
// 		ans += b[n][j];
// 	}
// 	if (ans == m)
// 	{ // 在这里DP
// 		sort(t + 1, t + tot + 1);
// 		for (j = 1; j <= tot; ++j)
// 		{
// 			cout << t[j].x << ' ' << t[j].y << " 开始列：" << t[j].z << "\n";
// 		}
// 		ans = 0;
// 		for (j = 1; j <= tot; ++j)
// 		{
// 		}
// 		// cout << "1\n"
// 		// 	 << ans;
// 	}
// 	else
// 	{
// 		cout << "0\n"
// 			 << ans;
// 	}
// 	return 0;
// }
