#include <bits/stdc++.h>
using namespace std;

const int R = 1e5 + 10;
int a[R], n;
class LCT
{
public:
	struct
	{
		int org, res, son[2], fa;
		bool tag;
	} t[R];
	// 以下为splay操作
#define lc(k) t[k].son[0]
#define rc(k) t[k].son[1]
#define fa(k) t[k].fa
#define isrc(k) (rc(fa(k)) == k)
#define reverse(k) t[k].tag ^= 1
#define notroot(k) (lc(fa(k)) == k || rc(fa(k)) == k) // 只要它是一个父亲的子结点，那它就不是根
#define connect(x, f, k) fa(x) = f, t[f].son[k] = x
	void pushup(int k)
	{
		t[k].res = t[k].org ^ t[lc(k)].res ^ t[rc(k)].res;
	}
	void pushdown(int k)
	{
		if (t[k].tag)
		{
			swap(lc(k), rc(k));
			t[lc(k)].tag ^= 1;
			t[rc(k)].tag ^= 1;
			t[k].tag = false;
		}
	}
	void pushdown_all(int x) // 由于之后出现了从下往上splay的情况，如果不先提前放下所有标记就会出问题
	{
		if (notroot(x))
			pushdown_all(fa(x));
		pushdown(x);
	}
	void rotate(int x)
	{
		int f = fa(x), ff = fa(f);
		int k = isrc(x);
		connect(t[x].son[k ^ 1], f, k);
		fa(x) = ff;
		if (notroot(f))
			t[ff].son[isrc(f)] = x; // fa一定会连上，但儿子不一定连上（因为分实边虚边）
		connect(f, x, k ^ 1);
		pushup(f), pushup(x); // 先更新子结点（fa已经是子结点了），再更新新父结点
	}
	void splay(int x)
	{
		pushdown_all(x);
		int f, ff;
		while (notroot(x))
		{
			f = fa(x), ff = fa(f);
			if (notroot(f))
				isrc(f) ^ isrc(x) ? rotate(x) : rotate(f);
			rotate(x);
		}
		// pushup(x);
	}
	// 以下为LCT操作
	void access(int x)
	{
		for (int y = 0; x; x = fa(y = x)/*y=x一定要写在x=fa(x)之前！！！*/)
		{
			splay(x);
			rc(x) = y; // x到达树的最右下角，因为总是在往右儿子上挂
			pushup(x);
		}
	}
	void makeroot(int x) // 换根就相当于把住最底下的那个结点，然后把它提溜上来，这样就要求这个splay的中序遍历完全反过来，所以最后要reverse一下
	{
		access(x); // 从根到x打通了一条实链
		splay(x);  // 把x沿着这条实链转到根上
		reverse(x);
	}
	int findroot(int x)
	{
		access(x);
		splay(x);
		while (lc(x)) // x最初的时候在最右下，splay之后翻到了最上，也就是说原来的根结点和其他x的祖宗结点都到了x的左边。根据LCT需要的splay的性质（中序遍历结点深度递增）可知，一直往左边找，找到的第一个没有左儿子的结点就是原root（因为它没有左儿子）
		{
			pushdown(x);
			x = lc(x);
		}
		splay(x);
		return x;
	}
	void link(int x, int y)
	{
		makeroot(x);
		if (findroot(y) == x)
			return;
		fa(x) = y;
	}
	void cut(int x, int y)
	{
		makeroot(x);
		if (findroot(y) != x /*不在一棵树上*/ ||
			fa(y) != x ||
			lc(y) /*由于中序遍历深度递增，如果y有左儿子，那么x和y的深度就一定不相邻，自然x和y也不相邻*/)
			return;
		rc(x) = fa(y) = 0;
		pushup(x);
	}
	void split(int x, int y) // 从x到y的路径（注意方向）
	{
		makeroot(x);
		access(y);
		splay(y);
	}
} lct;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int m, j, x, y, t;
	cin >> n >> m;
	for (j = 1; j <= n; ++j)
		cin >> lct.t[j].org;
	while (m--)
	{
		cin >> t >> x >> y;
		if (t == 0)
		{
			lct.split(x, y);
			cout << lct.t[y].res << '\n'; // splay把y转到了最顶上，所以访问y就是访问这个splay的根结点
		}
		else if (t == 1)
		{
			lct.link(x, y);
		}
		else if (t == 2)
		{
			lct.cut(x, y);
		}
		else
		{
			lct.splay(x);
			lct.t[x].org = y;
			lct.pushup(x);
		}
	}
	return 0;
}