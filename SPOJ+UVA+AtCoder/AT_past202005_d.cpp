#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	string s[6];
	int n, i;
	cin >> n;
	for (i = 1; i <= 5; ++i)
	{
		cin >> s[i];
	}
	for (i = 1; i <= n * 4; i += 4)
	{
		if (
			s[1][i] == '#' && s[1][i + 1] == '#' && s[1][i + 2] == '#' &&
			s[2][i] == '#' && s[2][i + 1] == '.' && s[2][i + 2] == '#' &&
			s[3][i] == '#' && s[3][i + 1] == '.' && s[3][i + 2] == '#' &&
			s[4][i] == '#' && s[4][i + 1] == '.' && s[4][i + 2] == '#' &&
			s[5][i] == '#' && s[5][i + 1] == '#' && s[5][i + 2] == '#')
			cout << '0';
		else if (
			s[1][i] == '.' && s[1][i + 1] == '#' && s[1][i + 2] == '.' &&
			s[2][i] == '#' && s[2][i + 1] == '#' && s[2][i + 2] == '.' &&
			s[3][i] == '.' && s[3][i + 1] == '#' && s[3][i + 2] == '.' &&
			s[4][i] == '.' && s[4][i + 1] == '#' && s[4][i + 2] == '.' &&
			s[5][i] == '#' && s[5][i + 1] == '#' && s[5][i + 2] == '#')
			cout << '1';
		else if (
			s[1][i] == '#' && s[1][i + 1] == '#' && s[1][i + 2] == '#' &&
			s[2][i] == '.' && s[2][i + 1] == '.' && s[2][i + 2] == '#' &&
			s[3][i] == '#' && s[3][i + 1] == '#' && s[3][i + 2] == '#' &&
			s[4][i] == '#' && s[4][i + 1] == '.' && s[4][i + 2] == '.' &&
			s[5][i] == '#' && s[5][i + 1] == '#' && s[5][i + 2] == '#')
			cout << '2';
		else if (
			s[1][i] == '#' && s[1][i + 1] == '#' && s[1][i + 2] == '#' &&
			s[2][i] == '.' && s[2][i + 1] == '.' && s[2][i + 2] == '#' &&
			s[3][i] == '#' && s[3][i + 1] == '#' && s[3][i + 2] == '#' &&
			s[4][i] == '.' && s[4][i + 1] == '.' && s[4][i + 2] == '#' &&
			s[5][i] == '#' && s[5][i + 1] == '#' && s[5][i + 2] == '#')
			cout << '3';
		else if (
			s[1][i] == '#' && s[1][i + 1] == '.' && s[1][i + 2] == '#' &&
			s[2][i] == '#' && s[2][i + 1] == '.' && s[2][i + 2] == '#' &&
			s[3][i] == '#' && s[3][i + 1] == '#' && s[3][i + 2] == '#' &&
			s[4][i] == '.' && s[4][i + 1] == '.' && s[4][i + 2] == '#' &&
			s[5][i] == '.' && s[5][i + 1] == '.' && s[5][i + 2] == '#')
			cout << '4';
		else if (
			s[1][i] == '#' && s[1][i + 1] == '#' && s[1][i + 2] == '#' &&
			s[2][i] == '#' && s[2][i + 1] == '.' && s[2][i + 2] == '.' &&
			s[3][i] == '#' && s[3][i + 1] == '#' && s[3][i + 2] == '#' &&
			s[4][i] == '.' && s[4][i + 1] == '.' && s[4][i + 2] == '#' &&
			s[5][i] == '#' && s[5][i + 1] == '#' && s[5][i + 2] == '#')
			cout << '5';
		else if (
			s[1][i] == '#' && s[1][i + 1] == '#' && s[1][i + 2] == '#' &&
			s[2][i] == '#' && s[2][i + 1] == '.' && s[2][i + 2] == '.' &&
			s[3][i] == '#' && s[3][i + 1] == '#' && s[3][i + 2] == '#' &&
			s[4][i] == '#' && s[4][i + 1] == '.' && s[4][i + 2] == '#' &&
			s[5][i] == '#' && s[5][i + 1] == '#' && s[5][i + 2] == '#')
			cout << '6';
		else if (
			s[1][i] == '#' && s[1][i + 1] == '#' && s[1][i + 2] == '#' &&
			s[2][i] == '.' && s[2][i + 1] == '.' && s[2][i + 2] == '#' &&
			s[3][i] == '.' && s[3][i + 1] == '.' && s[3][i + 2] == '#' &&
			s[4][i] == '.' && s[4][i + 1] == '.' && s[4][i + 2] == '#' &&
			s[5][i] == '.' && s[5][i + 1] == '.' && s[5][i + 2] == '#')
			cout << '7';
		else if (
			s[1][i] == '#' && s[1][i + 1] == '#' && s[1][i + 2] == '#' &&
			s[2][i] == '#' && s[2][i + 1] == '.' && s[2][i + 2] == '#' &&
			s[3][i] == '#' && s[3][i + 1] == '#' && s[3][i + 2] == '#' &&
			s[4][i] == '#' && s[4][i + 1] == '.' && s[4][i + 2] == '#' &&
			s[5][i] == '#' && s[5][i + 1] == '#' && s[5][i + 2] == '#')
			cout << '8';
		else
			cout << '9';
	}
	cout << endl;
	return 0;
}
