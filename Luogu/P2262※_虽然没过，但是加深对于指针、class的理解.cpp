// 之前的写法请看洛谷的提交记录
// 2023.5.7 21:30开始大规模重构
#include <bits/stdc++.h>
using namespace std;

// 不同级别的文件夹也会有重名，所以必须用指针！
int maxUserNumber, maxServerFlux, maxUserFlux, userTotal = 0, userFlux, tme, presentMaxUserFlux;
// userop正在进行上传、下载操作的（即会影响网速的）用户数量
enum STATETAG
{
	NORMAL,
	UPLOAD,
	DOWNLOAD,
	GUEST, // 在输入时，A=1表示上传用户，A=2下载表示用户，A=3表示匿名用户
};

class File;
class Folder;
class FTPServer;
class Task;
class User;

struct File
{
	string fileName;
	int size;
	short state; // 0无操作，1上传，2下载
	Folder *belongTo;
	File()
	{
		size = 0;
		state = NORMAL;
	}
	File(string &name, int sz, short st, Folder *blt)
	{
		fileName = name;
		size = sz;
		state = st;
		belongTo = blt;
	}
};
class Folder
{
public:
	string folderName;
	int size;
	short state; // 0无操作，1上传，2下载
	Folder *belongTo;
	vector<File *> files;
	vector<Folder *> folders;
	Folder()
	{
		size = 0;
		state = NORMAL;
		belongTo = NULL;
	}
	Folder(string &name, int sz, short st, Folder *blt)
	{
		folderName = name;
		size = sz;
		state = st;
		belongTo = blt;
	}
	File *findFile(string fl)
	{
		for (auto p = files.begin(); p != files.end(); ++p)
			if ((*p)->fileName == fl)
				return *p;
		return NULL;
	}
	Folder *findFolder(string fd)
	{
		for (auto p = folders.begin(); p != folders.end(); ++p)
			if ((*p)->folderName == fd)
				return *p;
		return NULL;
	}
	void addFile(File *fl)
	{
		Folder *fd = this; // 这里的this相当于fl->belongTo
		while (fd->belongTo != NULL)
		{
			fd->size += fl->size;
			fd = fd->belongTo;
		}
		if (fd->belongTo == NULL)
			fd->size += fl->size;
		files.push_back(fl);
	}
	void addFolder(Folder *fd) { folders.push_back(fd); }
	void cancelState() // 仅针对某一文件的父文件夹进行取消标记操作
	{
		for (auto p = files.begin(); p != files.end(); ++p)
			if ((*p)->state != NORMAL)
				return;
		this->state = NORMAL;
	}
	bool uploading() // 检查子目录下是否有文件夹正在被上传，如果有则表示不能下载，返回FALSE
	// 也正是因为采用这种查找方法，取消文件标记的时候才不用一级一级往上找
	{
		for (auto p = folders.begin(); p != folders.end(); ++p)
			if (!(*p)->uploading())
				return false;
		return this->state == NORMAL;
	}
};

struct Task
{
	string user; // 进行操作时用户连接断开，便于查找并删除任务
	int restSize;
	short type;
	bool isdel;
	File *fl;
	Folder *fd; // 仅在下载时使用
	Task() {}
	Task(string &u, int sz, short t, File *f)
	{
		user = u;
		restSize = sz;
		type = t;
		isdel = false;
		fl = f;
		fd = NULL;
	}
	Task(string &u, int sz, short t, Folder *f)
	{
		user = u;
		restSize = sz;
		type = t;
		isdel = false;
		fd = f;
		fl = NULL;
	}
};
vector<Task> tasks;
class User
{
public:
	string name;
	short type, state;
	Folder *pos;
	Task *task; // 断开时查找任务
	User() {}
	User(string &u, short tp, short st, Folder *p, Task *tk)
	{
		name = u;
		type = tp;
		state = st;
		pos = p;
		task = tk;
	}
	File *findFile(string &fl) // 查找用户(当前所在的)目录下是否有要进行操作的文件
	{
		for (auto p = pos->files.begin(); p != pos->files.end(); ++p)
			if ((*p)->fileName == fl)
				return *p;
		return NULL;
	}
	Folder *findFolder(string &fd)
	{
		for (auto p = pos->folders.begin(); p != pos->folders.end(); ++p)
			if ((*p)->folderName == fd)
				return *p;
		return NULL;
	}
};
class FTPServer
{
public:
	map<string, User> users;
	vector<Task *> tasks;
	Folder *root = new Folder;

	void fluxUpdate()
	{
		presentMaxUserFlux = (userTotal == 0 ? 0 : maxServerFlux / userTotal); // 代表的是当前服务器正在承载的流量
		userFlux = min(presentMaxUserFlux, maxUserFlux);
	}
	void taskUpdate()
	{
		for (auto p = tasks.begin(); p != tasks.end();)
		{
			if ((*p)->isdel)
			{
				p = tasks.erase(p);
				continue;
			}
			(*p)->restSize -= userFlux;
			if ((*p)->restSize <= 0)
			{
				if ((*p)->type == UPLOAD)
				{
					if ((*p)->fd == NULL) // 是文件
					{
						(*p)->fl->state = NORMAL;
						(*p)->fl->belongTo->cancelState();
					}
					else
					{
						(*p)->fd->state = NORMAL;
					}
				}
				if (users[(*p)->user].state != NORMAL)
				{
					--userTotal;
				}
				users[(*p)->user].state = NORMAL;
				users[(*p)->user].task = NULL;
				p = tasks.erase(p);
			}
			else
			{
				++p;
			}
		}
	}
	bool connect(string &name, short tp)
	{
		if (!users.count(name) && users.size() < maxUserNumber)
		{
			users[name] = User(name, tp, NORMAL, root, NULL);
			return true;
		}
		return false;
	}
	bool quit(string &name)
	{
		if (!users.count(name))
			return false;
		if (users[name].state != NORMAL)
		{
			users[name].task->isdel = true;
			--userTotal;
            // 这里不删task了，留给更新的时候回收垃圾就行
			// auto p = find(tasks.begin(), tasks.end(), users[name].task);
			// if ((*p)->type == UPLOAD)
			// {
			// 	if ((*p)->fd == NULL) // 是文件
			// 	{
			// 		(*p)->fl->state = NORMAL;
			// 		(*p)->fl->belongTo->cancelState();
			// 	}
			// 	else
			// 		(*p)->fd->state = NORMAL;
			// }
			// tasks.erase(p);
		}
		// 没有在对任务进行操作时，不用删除任务，直接删用户就行
		users.erase(name);
		return true;
	}
	bool cd(string &name, string &fdName)
	{
		if (!users.count(name) || users[name].state != NORMAL) // 题目中说只能同时进行一种操作
			return false;
		Folder *fd = users[name].findFolder(fdName);
		if (fd == NULL || fd->state != NORMAL)
			return false;
		users[name].pos = fd;
		return true;
	}
	bool cd__(string &name)
	{
		if (!users.count(name) || users[name].pos == root)
			return false;
		users[name].pos = users[name].pos->belongTo;
		return true;
	}
	bool download(string &name, string &flName)
	{
		if (!users.count(name) || users[name].type != DOWNLOAD || users[name].state != NORMAL)
			return false;
		File *fl = users[name].findFile(flName);
		if (fl) // 要下载文件
		{
			if (fl->state != NORMAL)
				return false;
			users[name].state = DOWNLOAD;
			++userTotal;
			Task *t = new Task(name, fl->size, DOWNLOAD, fl);
			users[name].task = t;
			tasks.push_back(t);
			return true;
		}
		Folder *fd = users[name].findFolder(flName);
		if (fd) // 文件夹
		{
			if (fd->state != NORMAL)
				return false;
			users[name].state = DOWNLOAD;
			++userTotal;
			Task *t = new Task(name, fd->size, DOWNLOAD, fd);
			users[name].task = t;
			tasks.push_back(t);
			return true;
		}
		return false;
	}
	bool upload(string &name, string &flName, int sz)
	{
		if (!users.count(name) || users[name].type != UPLOAD || users[name].state != NORMAL)
			return false;
		if (users[name].findFile(flName) != NULL || users[name].findFolder(flName) != NULL)
			return false;
		if (sz == 0)
		{
			Folder *fd = new Folder(flName, 0, UPLOAD, users[name].pos);
			Task *t = new Task(name, 0, UPLOAD, fd);
			tasks.push_back(t);
			users[name].task = t;
			users[name].pos->addFolder(fd);
		}
		else
		{
			File *f = new File(flName, sz, UPLOAD, users[name].pos);
			Task *t = new Task(name, sz, UPLOAD, f);
			tasks.push_back(t);
			users[name].task = t;
			users[name].pos->state = UPLOAD;
			users[name].pos->addFile(f);
		}
		++userTotal;
		users[name].state = UPLOAD;
		return true;
	}
	void input()
	{
		stack<Folder *> fa;
		Folder *tfd;
		File *tfl;
		fa.push(root);
		string name;
		int sz;
		while (true)
		{
			cin >> name;
			if (name == "-")
			{ // 更新文件夹大小
				fa.pop();
				if (fa.empty())
					break;
			}
			else
			{
				cin >> sz;
				if (sz == 0)
				{
					tfd = new Folder(name, 0, NORMAL, fa.top());
					fa.top()->addFolder(tfd);
					fa.push(tfd);
				}
				else
				{
					tfl = new File(name, sz, NORMAL, fa.top());
					fa.top()->addFile(tfl);
				}
			}
		}
	}
	// void test()
	// {
	// 	Folder *fd;
	// 	for (auto p = files.begin(); p != files.end(); ++p)
	// 	{
	// 		fd = (*p)->belongTo;
	// 		cout << (*p)->fileName << ' ' << (*p)->state;
	// 		if (fd != root) // 不是根目录下的文件
	// 		{
	// 			while (fd != root)
	// 			{
	// 				cout << "<-" << fd->folderName << ' ' << fd->state;
	// 				fd = fd->belongTo;
	// 			}
	// 		}
	// 		cout << "<-root\n";
	// 	}
	// 	cout << '\n';
	// 	for (auto p = folders.begin(); p != folders.end(); ++p)
	// 	{
	// 		fd = (*p)->belongTo;
	// 		cout << (*p)->folderName << ' ' << (*p)->state;
	// 		if (fd != root) // 不是根目录下的文件
	// 		{
	// 			while (fd != root)
	// 			{
	// 				cout << "<-" << fd->folderName << ' ' << fd->state;
	// 				fd = fd->belongTo;
	// 			}
	// 		}
	// 		cout << "<-root\n";
	// 	}
	// }
} server;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> maxUserNumber >> maxServerFlux >> maxUserFlux;
	server.input();
	string cur, name, op, type, pos, fileName;
	int now, sz;
	while (true)
	{
		cin >> cur;
		if (cur == "down")
			break;
		else
		{
			now = stoi(cur);
			for (; tme <= now; ++tme)
			{
				server.fluxUpdate();
				server.taskUpdate();
			}
			// file.test();
			cin >> name >> op;
			if (op == "connect")
			{
				cin >> type;
				cout << (server.connect(name, stoi(type)) ? "success\n" : "unsuccess\n");
			}
			else if (op == "quit")
			{
				cout << (server.quit(name) ? "success\n" : "unsuccess\n");
			}
			else if (op == "cd")
			{
				cin >> pos;
				cout << (server.cd(name, pos) ? "success\n" : "unsuccess\n");
			}
			else if (op == "cd..")
			{
				cout << (server.cd__(name) ? "success\n" : "unsuccess\n");
			}
			else if (op == "download")
			{
				cin >> fileName;
				cout << (server.download(name, fileName) ? "success\n" : "unsuccess\n");
			}
			else // upload
			{
				cin >> fileName >> sz;
				cout << (server.upload(name, fileName, sz) ? "success\n" : "unsuccess\n");
			}
		}
	}
	return 0;
}
