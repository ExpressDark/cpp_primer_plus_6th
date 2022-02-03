/*
下面是一个结构声明：
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
a.编写一个函数，按值传递box结构，并显示每个成员的值
b.编写一个函数，传递box结构的地址，并将volume成员设置为其他三维长度的乘积。
c.编写一个使用这两个函数的简单程序。
*/
#include <iostream>
using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void fun_a(box a);
void fun_b(box *a);

int main()
{
	box a = {
		"whl",
		10,
		20,
		1,
		200
	};
	fun_a(a);
	fun_b(&a);
	return 0;
}
 
void fun_a(box a)
{
	cout << a.maker << endl << a.height << endl << a.width << endl << a.length << endl << a.volume << endl;
}
 
void fun_b(box *a)
{
	a->volume = a->height * a->width * a-> length;
	cout << a->volume << endl;
}