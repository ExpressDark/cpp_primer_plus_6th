/*
下面是一个程序框架：
#include <iostream>
#include <cstring>

using namespace std;

struct stringy
{
	char *str;
	int ct;
};

int main(void)
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	
	set(beany, testing);

	show(beany);
	show(beany, 2);

	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done");

	return  0;
}
请提供其中描述的函数和原型，从而完成该程序。注意，应有两个show（）函数，每个都使用默认函数。请尽可能使用const参数。set（）使用new分配足够
的空间来存储指定的字符串。这里使用的技术与设计和实现类时使用的相似。（可能还必须修改头文件的名称，删除using编译指令，这取决于所用的编译器。）
*/
#include <iostream>
#include <cstring>

using namespace std;

struct stringy
{
	char *str;
	int ct;
};

void set(stringy &str, const char *source);
void show(stringy &str, int n = 1);
void show(const char *str, int n = 1);

int main(void)
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	
	set(beany, testing);

	show(beany);
	show(beany, 2);

	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done");

	return  0;
}

void set(stringy &str, const char *source)
{
	str.ct = strlen(source) + 1;
	str.str = new char[str.ct];
	strcpy(str.str, source);
}

void show(stringy &str, int n)
{
	for(int i = 0; i < n; i++)
		cout << str.str << endl;
}

void show(const char *str, int n)
{
	for(int i = 0; i < n; i++)
		cout << str << endl;
}
