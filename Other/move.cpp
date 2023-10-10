#include <iostream>
#include <string>
using namespace std;

int main()
{
	// ifstream ifs("test.txt"); // 改成你要打开的文件
	// streambuf *old_buffer = cin.rdbuf(ifs.rdbuf());

	// string read;
	// while (cin >> read) // 逐词读取方法一
	// {
	// }

	// cin.rdbuf(old_buffer); // 修复buffer
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

namespace move
{
	string s;
	void main()
	{
		freopen("test.txt", "r", stdin);
		freopen("Luogu.md", "w", stdout);
		while (getline(cin, s)) // getline不读换行符
		{
			if (s.size() == 0) //一个代码结束时的换行
			{
				cout << "```\n\n";
			}
			else if (s[2] != ' ' || (s[2] == ' ' && s[3] == 'P')) //一个代码的题号
			{
				if (s[2] != ' ')
				{
					s.erase(0, 2);
				}
				else
				{
					s.erase(0, 3);
				}
				cout << s << "\n```cpp\n"
					 << "#include <bits/stdc++.h>\nusing namespace std;\n\n";
			}
			else
			{
				s.erase(0, 2);
				int now = 0;
				while (s[now] == ' ')
				{
					s.erase(0, 1);
				}
				cout << s << '\n';
			}
		}
	}
}
int main()
{
	move::main();
	return 0;
}