#include <bits/stdc++.h>
using namespace std;

int main()
{

	return 0;
}

// 10164
// int f[15][15], a[15]; // f[i][j]代表i位数最后一位取j可以得到的总方案数
// inline void nt()
// {
// 	register int i, j, k;
// 	for (j = 0; j <= 9; ++j)
// 		f[1][j] = 1;
// 	for (i = 2; i <= 10; ++i)
// 		for (j = 0; j <= 9; ++j)
// 			for (k = j; k <= 9; ++k)
// 				f[i][j] += f[i - 1][k];
// }
// int dp(int n)
// {
// 	if (n == 0)
// 		return 1;
// 	int k = 0;
// 	while (n)
// 	{
// 		a[++k] = n % 10;
// 		n /= 10;
// 	}
// 	int ans = 0, last = 0;
// 	register int i, j;
// 	for (i = k; i >= 1; --i)
// 	{
// 		for (j = last; j <= a[i] - 1; ++j) //不贴上界取
// 			ans += f[i][j];
// 		if (a[i] < last)
// 			break;
// 		last = a[i];
// 		if (i == 1) //到最后一次也没break掉，说明这个数本身也能满足不递减的性质，所以ans+1
// 			++ans;
// 	}
// 	return ans;
// }
// int main()
// {
// 	nt();
// 	int l, r;
// 	while (cin >> l >> r)
// 		cout << dp(r) - dp(l - 1) << "\n";
// 	return 0;
// }

// 10022
//  #define reg register int
//  const int R = 1e7 + 10;
//  int temp[R], ans[R], maxdep = 1;
//  inline int gcd(int x, int y)
//  {
//  	int z;
//  	while (y)
//  	{
//  		z = x % y;
//  		x = y;
//  		y = z;
//  	}
//  	return x;
//  }
//  struct Node
//  {
//  	int a, b;
//  	Node(int c, int d)
//  	{
//  		int g = gcd(c, d);
//  		a = c / g, b = d / g;
//  	}
//  	Node() { a = 0, b = 1; } //一定要写这句，否则会报错
//  	bool operator<(const Node &t) const { return a * t.b < b * t.a; }
//  	bool operator<=(const Node &t) const { return a * t.b <= b * t.a; }
//  	bool operator>(const Node &t) const { return a * t.b > b * t.a; }
//  	bool operator>=(const Node &t) const { return a * t.b >= b * t.a; }
//  	bool operator==(const Node &t) const { return a * t.b == b * t.a; }
//  	Node operator+(const Node &t) const
//  	{
//  		int fz = (a * t.b) + (b * t.a), fm = b * t.b, g = gcd(fz, fm);
//  		return {fz / g, fm / g};
//  	}
//  	Node operator-(const Node &t) const
//  	{
//  		int fz = (a * t.b) - (b * t.a), fm = b * t.b, g = gcd(fz, fm);
//  		return {fz / g, fm / g};
//  	}
//  } x;
//  void dfs(int p, Node sum, int last)
//  {
//  	if (sum > x || p > maxdep)
//  	{
//  		return;
//  	}
//  	if (p == maxdep)
//  	{
//  		Node left = x - sum;
//  		if (left.a == 1 && left.b <= 1e7 && left.b > last)
//  		{
//  			if (left.b < ans[maxdep])
//  			{
//  				for (reg j = 1; j < maxdep; ++j)
//  				{
//  					ans[j] = temp[j];
//  				}
//  				ans[maxdep] = left.b;
//  			}
//  		}
//  		return;
//  	}
//  	for (reg j = last + 1; j <= ans[maxdep] && sum + Node(maxdep - p + 1, j) >= x; ++j)
//  	{
//  		temp[p] = j;
//  		dfs(p + 1, sum + Node(1, j), j);
//  	}
//  	return;
//  }
//  int main()
//  {
//  	int a, b;
//  	cin >> a >> b;
//  	x = Node(a, b);
//  	while (true)
//  	{
//  		ans[maxdep] = INT_MAX;
//  		dfs(1, {0, 1}, 0);
//  		if (ans[maxdep] != INT_MAX)
//  		{
//  			for (reg j = 1; j <= maxdep; ++j)
//  			{
//  				cout << ans[j] << ' ';
//  			}
//  			return 0;
//  		}
//  		++maxdep;
//  	}
//  	return 0;
//  }

// 10209
//  using ll = long long;
//  ll exgcd(ll a, ll b, ll &x, ll &y)
//  {
//  	if (b == 0)
//  	{
//  		x = 1;
//  		y = 0;
//  		return a;
//  	}
//  	ll d = exgcd(b, a % b, x, y);
//  	ll t = x;
//  	x = y;
//  	y = t - a / b * y;
//  	return d;
//  }
//  int main()
//  {
//  	ll x, y, m, n, l, x1, y1;
//  	cin >> x >> y >> m >> n >> l;
//  	ll a = n - m, b = l, c = x - y;
//  	if (a < 0)
//  	{
//  		a = -a;
//  		c = -c;
//  	}
//  	ll d = exgcd(a, b, x1, y1), r = b / d;
//  	x1 = x1 * (c / d);
//  	if (a == 0 || c % d != 0)
//  	{
//  		cout << "Impossible";
//  		return 0;
//  	}
//  	cout << (x1 % r + r) % r;
//  	return 0;
//  }

// 104
//  const int R = 1e5 + 10;
//  struct Node
//  {
//  	int l, r, val, key, size;
//  } tree[R];
//  mt19937 rd;
//  int tot, root; //每次操作后都要更新root
//  int create(int val)
//  {
//  	tree[++tot].key = rd();
//  	tree[tot].val = val;
//  	tree[tot].size = 1;
//  	return tot;
//  }
//  void pushup(int k)
//  {
//  	tree[k].size = tree[tree[k].l].size + tree[tree[k].r].size + 1;
//  }
//  void split(int k, int val, int &x, int &y)
//  {
//  	if (k == 0)
//  	{
//  		x = y = 0;
//  		return;
//  	}
//  	if (tree[k].val <= val)
//  	{
//  		x = k;
//  		split(tree[k].r, val, tree[k].r, y);
//  	}
//  	else
//  	{
//  		y = k;
//  		split(tree[k].l, val, x, tree[k].l);
//  	}
//  	pushup(k);
//  }
//  int merge(int x, int y)
//  {
//  	if (x == 0 || y == 0)
//  		return (x == 0 ? y : x);
//  	if (tree[x].key > tree[y].key)
//  	{
//  		tree[x].r = merge(tree[x].r, y);
//  		pushup(x);
//  		return x;
//  	}
//  	else
//  	{
//  		tree[y].l = merge(x, tree[y].l);
//  		pushup(y);
//  		return y;
//  	}
//  }
//  int x, y, z; //临时变量，干杂活，无实际含义
//  void insert(int val)
//  {
//  	split(root, val, x, y);
//  	root = merge(merge(x, create(val)), y);
//  }
//  void del(int val)
//  {
//  	split(root, val, x, y);
//  	split(x, val - 1, x, z);
//  	if (tree[z].size)
//  	{
//  		z = merge(tree[z].l, tree[z].r); //根节点不要了，把两个子树合并起来就相当于去掉根节点
//  		root = merge(merge(x, z), y);
//  	}
//  }
//  int rankx(int val)
//  {
//  	split(root, val - 1, x, y); //注意是要将所有<val的树分到子树x上，而非<=
//  	int res = tree[x].size + 1;
//  	root = merge(x, y);
//  	return res;
//  }
//  int kth(int k)
//  {
//  	x = root;
//  	while (x)
//  	{
//  		if (tree[tree[x].l].size + 1 == k)
//  			return tree[x].val;
//  		if (tree[tree[x].l].size >= k)
//  			x = tree[x].l;
//  		else
//  		{
//  			k = k - (tree[tree[x].l].size + 1); //注意减的是左子树的大小+1
//  			x = tree[x].r;
//  		}
//  	}
//  	return -1;
//  }
//  int pre(int val)
//  {
//  	split(root, val - 1, x, y);
//  	z = x;
//  	while (tree[z].r)
//  		z = tree[z].r;
//  	root = merge(x, y);
//  	return tree[z].val;
//  }
//  int ext(int val)
//  {
//  	split(root, val, x, y);
//  	z = y;
//  	while (tree[z].l)
//  		z = tree[z].l;
//  	root = merge(x, y);
//  	return tree[z].val;
//  }
//  int main()
//  {
//  	ios::sync_with_stdio(false);
//  	cin.tie(nullptr);
//  	cout.tie(nullptr);
//  	int n, opt;
//  	cin >> n;
//  	while (n--)
//  	{
//  		cin >> opt >> x;
//  		if (opt == 1)
//  			insert(x);
//  		else if (opt == 2)
//  			del(x);
//  		else if (opt == 3)
//  			cout << rankx(x) << '\n';
//  		else if (opt == 4)
//  			cout << kth(x) << '\n';
//  		else if (opt == 5)
//  			cout << pre(x) << '\n';
//  		else
//  			cout << ext(x) << '\n';
//  	}
//  	return 0;
//  }
