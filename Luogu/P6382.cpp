#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s;
	cin >> s;
	if (s.substr(0, 3) != "MDA")
	{
		cout << "1 1 1 1 1";
	}
	else
	{
		int i, num;
		for (i = s.size() - 1; i >= 0; --i)
		{
			if (isdigit(s[i]))
			{
				num = s[i] - '0';
				break;
			}
		}
		switch (num)
		{
		case 1:
			cout << "1 0 0 0 0";
			break;
		case 2:
			cout << "0 1 0 0 0";
			break;
		case 3:
			cout << "0 0 1 0 0";
			break;
		case 4:
			cout << "0 0 0 1 0";
			break;
		case 5:
			cout << "0 0 0 0 1";
			break;
		case 6:
			cout << "0 0 0 1 0";
			break;
		case 7:
			cout << "0 0 1 0 0";
			break;
		case 8:
			cout << "0 1 0 0 0";
			break;
		case 9:
			cout << "1 0 0 0 0";
			break;
		case 0:
			cout << "0 0 0 0 1";
			break;
		}
	}
	return 0;
}
