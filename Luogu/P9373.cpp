#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T;
	ll n, k, x, y;
	bool flag;
	cin >> T;
	while (T--)
	{
		cin >> n >> k;
		/*
		x>=0,y>0
		x+y=n => x=n-y,y=n-x
		x%y=k => (n-y)%y=k => n%y=k
		λy+k=n => y=(n-k)/λ
		x%(n-x)=k => μ(n-k)+k=x => x=n+(k-n)/(μ+1)
		x+y=(n-k)/λ+n+(k-n)/(μ+1)=n => λ=μ+1
		*/
		flag = false;
		for (ll x = k; x <= n / 2; ++x)
		{
			y = n - x;
			if (x % y == k)
			{
				cout << x << ' ' << y << '\n';
				flag = true;
				break;
			}
		}
		if (!flag)
		{
			cout << "-1\n";
		}
	}
	return 0;
}