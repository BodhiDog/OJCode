#include <bits/stdc++.h>
using namespace std;

#define reg register int
const int R = 1e7 + 10;
int temp[R], ans[R], maxdep = 1;
inline int gcd(int x, int y)
{
	int z;
	while (y)
	{
		z = x % y;
		x = y;
		y = z;
	}
	return x;
}
struct Node
{
	int a, b;
	Node(int c, int d)
	{
		int g = gcd(c, d);
		a = c / g, b = d / g;
	}
	Node() { a = 0, b = 1; } // 一定要写这句，否则会报错
	bool operator<(const Node &t) const { return a * t.b < b * t.a; }
	bool operator<=(const Node &t) const { return a * t.b <= b * t.a; }
	bool operator>(const Node &t) const { return a * t.b > b * t.a; }
	bool operator>=(const Node &t) const { return a * t.b >= b * t.a; }
	bool operator==(const Node &t) const { return a * t.b == b * t.a; }
	Node operator+(const Node &t) const
	{
		int fz = (a * t.b) + (b * t.a), fm = b * t.b, g = gcd(fz, fm);
		return {fz / g, fm / g};
	}
	Node operator-(const Node &t) const
	{
		int fz = (a * t.b) - (b * t.a), fm = b * t.b, g = gcd(fz, fm);
		return {fz / g, fm / g};
	}
} x;
void dfs(int p, Node sum, int last)
{
	if (sum > x || p > maxdep)
	{
		return;
	}
	if (p == maxdep)
	{
		Node left = x - sum;
		if (left.a == 1 && left.b <= 1e7 && left.b > last)
		{
			if (left.b < ans[maxdep])
			{
				for (reg j = 1; j < maxdep; ++j)
				{
					ans[j] = temp[j];
				}
				ans[maxdep] = left.b;
			}
		}
		return;
	}
	for (reg j = last + 1; j <= ans[maxdep] && sum + Node(maxdep - p + 1, j) >= x; ++j)
	{
		temp[p] = j;
		dfs(p + 1, sum + Node(1, j), j);
	}
	return;
}
int main()
{
	int a, b;
	cin >> a >> b;
	x = Node(a, b);
	while (true)
	{
		ans[maxdep] = INT_MAX;
		dfs(1, {0, 1}, 0);
		if (ans[maxdep] != INT_MAX)
		{
			for (reg j = 1; j <= maxdep; ++j)
			{
				cout << ans[j] << ' ';
			}
			return 0;
		}
		++maxdep;
	}
	return 0;
}