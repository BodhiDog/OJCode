// IDDFS（IDA*）写法1 
#include <bits/stdc++.h>
using namespace std;

 #define reg register int
 const char r[5][5] = {
 	"",
 	" 123",
 	" 804",
 	" 765"};
 const int xx[5] = {0, 0, 1, 0, -1},
 		  yy[5] = {0, 1, 0, -1, 0};
 char c[5][5];
 int maxdep, tot;
 inline int f()
 {
 	int res = 0;
 	reg i, j;
 	for (i = 1; i <= 3; ++i)
 	{
 		for (j = 1; j <= 3; ++j)
 		{
 			res += r[i][j] != c[i][j];
 		}
 	}
 	return res;
 }
 bool dfs(int x, int y, int step, int lastx, int lasty) // lastx和lasty是剪枝，防止跳过去又跳回来的情况
 {
 	if (step == maxdep)
 	{
 		if (!f())
 		{
 			return true;
 		}
 		else
 		{
 			return false;
 		}
 	}
 	reg j;
 	int tx, ty;
 	for (j = 1; j <= 4; ++j)
 	{
 		tx = x + xx[j];
 		ty = y + yy[j];
 		if (tx == lastx && ty == lasty)
 		{
 			continue;
 		}
 		if (c[tx][ty])
 		{
 			swap(c[x][y], c[tx][ty]);
 			if (step + f() <= maxdep) // 另一种写法也可，详见云端测试数据
 			{
 				if (dfs(tx, ty, step + 1, x, y))
 				{
 					return true;
 				}
 			}
 			swap(c[x][y], c[tx][ty]);
 		}
 	}
 	return false;
 }
 int main()
 {
 	reg i, j;
 	int sx, sy;
 	for (i = 1; i <= 3; ++i)
 	{
 		for (j = 1; j <= 3; ++j)
 		{
 			cin >> c[i][j];
 			if (c[i][j] == '0')
 			{
 				sx = i;
 				sy = j;
 			}
 		}
 	}
 	for (maxdep = 0;; ++maxdep)
 	{
 		if (dfs(sx, sy, 0, -1, -1)) // lx和ly先给一个不可能的值
 		{
 			break;
 		}
 	}
 	cout << maxdep;
 	return 0;
 }
 
// IDA*写法2
#include <bits/stdc++.h>
using namespace std;

const char tar[4][4] = {{0}, {0, '1', '2', '3'}, {0, '8', '0', '4'}, {0, '7', '6', '5'}};
const int dir[5][2] = {{0}, {1, 0}, {0, 1}, {-1, 0}, {0, -1}};
char now[4][4];
int ans;
bool dfs(int x, int y, int step, int lastx, int lasty)
{
	int diff = 0, i, j, tx, ty;
	for (i = 1; i <= 3; ++i)
	{
		for (j = 1; j <= 3; ++j)
		{
			diff += (now[i][j] != tar[i][j]);
		}
	}
	if (diff == 0)
	{
		return true;
	}
	if (step + (diff - 1) > ans) // A*剪枝：尝试之后发现，当有2个不同的时候，最少1步；当3个不同的时候，最多2步……
	{
		return false;
	}
	bool flag;
	for (i = 1; i <= 4; ++i)
	{
		tx = x + dir[i][0], ty = y + dir[i][1];
		if (tx > 3 || tx < 1 || ty > 3 || ty < 1 || lastx == tx && lasty == ty) // 上一步是从哪里走过来的
		{
			continue;
		}
		swap(now[x][y], now[tx][ty]);
		flag = dfs(tx, ty, step + 1, x, y);
		swap(now[x][y], now[tx][ty]);
		if (flag)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int i, j, x0, y0;
	for (i = 1; i <= 3; ++i)
	{
		for (j = 1; j <= 3; ++j)
		{
			cin >> now[i][j];
			if(now[i][j] == '0')
			{
				x0 = i, y0 = j;
			}
		}
	}
	while (true)
	{
		if (dfs(x0, y0, 0, 0, 0))
		{
			break;
		}
		else
		{
			++ans;
		}
	}
	cout << ans << '\n';
	return 0;
}

// 双向BFS
 #define check(x) x >= 1 && x <= 3
 using ll = long long;
 const char RES[5][5] = {
 	"",
 	" 123",
 	" 804",
 	" 765"};
 const int xx[5] = {0, 0, 1, 0, -1},
 		  yy[5] = {0, 1, 0, -1, 0};
 struct Node
 {
 	int step, x, y;
 	char c[4][4];
 };
 queue<Node> q[2];				 // q[0]从前往后，q[1]从后往前
 unordered_map<ll, int> stepm[2]; // 将状态映射为步数
 unordered_map<ll, int> vism[2];	 // 将状态映射为是否访问
 inline int sqrtod(Node x)
 {
 	ll res = 0;
 	register int i, j;
 	for (i = 1; i <= 3; ++i)
 	{
 		for (j = 1; j <= 3; ++j)
 		{
 			res = res * 10 + (x.c[i][j] - '0');
 		}
 	}
 	return res;
 }
 inline bool expand(int a)
 {
 	Node temp;
 	temp = q[a].front();
 	q[a].pop();
 	ll t2;
 	int tx, ty, x = temp.x, y = temp.y;
 	for (register int j = 1; j <= 4; ++j)
 	{
 		tx = x + xx[j];
 		ty = y + yy[j];
 		if (check(tx) && check(ty))
 		{
 			swap(temp.c[x][y], temp.c[tx][ty]);
 			t2 = sqrtod(temp);
 			if (!vism[a][t2])
 			{
 				vism[a][t2] = true;
 				++temp.step;
 				temp.x = tx;
 				temp.y = ty;
 				stepm[a][t2] = temp.step;
 				q[a].push(temp);
 				--temp.step; // 回溯
 				if (vism[!a][t2])
 				{
 					cout << stepm[!a][t2] + stepm[a][t2];
 					return true;
 				}
 			}
 			swap(temp.c[x][y], temp.c[tx][ty]);
 		}
 	}
 	return false;
 }
 inline void bfs()
 {
 	while (!q[0].empty())
 	{
 		if (expand(0))
 		{
 			return;
 		}
 		if (expand(1))
 		{
 			return;
 		}
 	}
 }
 int main()
 {
 	ll t = 0;
 	Node t1, t2;
 	bool flag = true;
 	register int i, j;
 	for (i = 1; i <= 3; ++i)
 	{
 		for (j = 1; j <= 3; ++j)
 		{
 			cin >> t1.c[i][j];
 			if (t1.c[i][j] == '0')
 			{
 				t1.x = i, t1.y = j;
 			}
 			t2.c[i][j] = RES[i][j];
 			if (t1.c[i][j] != RES[i][j])
 			{
 				flag = false;
 			}
 			t = t * 10 + (t1.c[i][j] - '0');
 		}
 	}
 	if (flag)
 	{
 		cout << '0';
 		return 0;
 	}
 	t2.x = 2, t2.y = 2;
 	vism[0][t] = true;
 	stepm[0][t] = 0;
 	t1.step = 0, t2.step = 0;
 	q[0].push(t1);
 	q[1].push(t2);
 	bfs();
 	return 0;
 }