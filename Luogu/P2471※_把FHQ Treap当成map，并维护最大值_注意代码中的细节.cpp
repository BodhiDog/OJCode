#include <bits/stdc++.h>
using namespace std;

const int R = 5e4 + 10;
struct
{
	int lc, rc, year, rain, maxrain, sz;
	unsigned int key;
} t[R];
int tot, root;
mt19937 rd;
int crt(int yy, int rr)
{
	t[++tot] = {.year = yy,
				.rain = rr,
				.maxrain = rr,
				.sz = 1,
				.key = rd()};
	return tot;
}
#define lc(k) t[k].lc
#define rc(k) t[k].rc
void pushup(int k)
{
	t[k].sz = t[lc(k)].sz + t[rc(k)].sz + 1;
	t[k].maxrain = t[k].rain; // 必须写这句！！！
	if (lc(k))
		t[k].maxrain = max(t[lc(k)].maxrain, t[k].maxrain);
	if (rc(k))
		t[k].maxrain = max(t[rc(k)].maxrain, t[k].maxrain);
}
void split(int k, int year, int &x, int &y)
{
	if (!k)
	{
		x = y = 0;
		return;
	}
	if (t[k].year <= year)
	{
		x = k;
		split(rc(k), year, rc(x), y);
	}
	else
	{
		y = k;
		split(lc(k), year, x, lc(y));
	}
	pushup(k);
}
int merge(int x, int y)
{
	if (!x || !y)
		return x + y;
	if (t[x].key < t[y].key)
	{
		rc(x) = merge(rc(x), y);
		pushup(x);
		return x;
	}
	else
	{
		lc(y) = merge(x, lc(y));
		pushup(y);
		return y;
	}
}
char query(int ly, int ry) // 查询[ly,ry]，false-1，maybe0，true1
{
	int lt, a, mid, b, rt;
	char res = 'm'; // res默认maybe
	split(root, ly - 1, lt, a);
	split(a, ly, a, mid);
	split(mid, ry - 1, mid, b);
	split(b, ry, b, rt);
	//[1,l-1][l,l][l+1,r-1][r,r][r+1,n]
	if (t[a].sz && t[b].sz)
	{
		if ((t[a].rain < t[b].rain) ||
			(t[mid].sz != 0 && t[b].rain <= t[mid].maxrain))
			res = 'f';
		else if (t[mid].sz < ry - ly - 1)
			res = 'm';
		else
			res = 't';
	}
	else if (!t[a].sz && t[b].sz)
	{
		if (t[mid].sz != 0 && t[b].rain <= t[mid].maxrain)
			res = 'f';
	}
	else if (t[a].sz && !t[b].sz)
	{
		if (t[mid].sz != 0 && t[a].rain <= t[mid].maxrain)
			res = 'f';
	}
	root = merge(lt, merge(a, merge(mid, merge(b, rt))));
	return res;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	// freopen("test.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	int n, m, y, r, x, res;
	cin >> n;
	for (int j = 1; j <= n; ++j)
	{
		cin >> y >> r;
		root = merge(root, crt(y, r));
	}
	cin >> m;
	while (m--)
	{
		cin >> x >> y;
		if (x > y)
		{
			cout << "false\n";
			continue;
		}
		res = query(x, y);
		if (res == 'f')
			cout << "false\n";
		else if (res == 'm')
			cout << "maybe\n";
		else
			cout << "true\n";
	}
	return 0;
}
