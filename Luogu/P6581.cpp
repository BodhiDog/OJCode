#include <bits/stdc++.h>
using namespace std;

void read(__int128 &x)
{
	bool fh = false;
	char c = getchar();
	while (!isdigit(c))
	{
		if (c == '-')
		{
			fh = true;
		}
		c = getchar();
	}
	while (isdigit(c))
	{
		x = x * 10 + (c - '0');
		c = getchar();
	}
	x = (fh ? -x : x);
}
void print(__int128 x)
{
	if (x > 10)
	{
		print(x / 10);
	}
	cout << int(x % 10);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	__int128 x = 0;
	read(x);
	if (x <= 0)
	{
		cout << '0';
	}
	else
	{
		print(x * 2 - 1);
	}
	return 0;
}
