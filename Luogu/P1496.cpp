#include <bits/stdc++.h>
using namespace std;

const int R = 2e4 + 10;
using ll = long long;
struct Node
{
	ll x;
	char c;
} a[R * 2];
ll sta[R], top;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, tot = 0, j, l, r;
	cin >> n;
	for (j = 1; j <= n; ++j)
	{
		cin >> l >> r;
		a[++tot] = {.x = l, .c = '['};
		a[++tot] = {.x = r, .c = ')'};
	}
	sort(a + 1, a + tot + 1, [](Node &x, Node &y)
		 { return x.x < y.x; });
	ll ans = 0;
	for (j = 1; j <= tot; ++j)
	{
		if (a[j].c == '[')
			sta[++top] = a[j].x;
		else
		{
			if (top == 1)
				ans += a[j].x - sta[top--];
			else
				--top;
		}
	}
	cout << ans << '\n';
	return 0;
}
