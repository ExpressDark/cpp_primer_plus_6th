/*
下面是一个结构声明：
    struct chaff
    {
        char dross[20];
        int slag;
    };
    编写一个程序，使用定位new运算符将一个包含两个这种结构的数组放在一个缓冲区中。然后，给结构的成员赋值（对于char数组，使用函数strcpy（）），
并使用一个循环来显示内容。一种方法是像程序清单9.10那样将一个静态数组作为缓冲区；另一个方法是使用常规new运算符来分配缓冲区。
*/
#include <iostream>
#include <cstring>
#include <new>

using namespace std;

struct chaff
{
	char dross[20];
	int slag;
};

const int BUF = 512;
char buffer[BUF];

void show(const chaff &p);

int main(void)
{
	char dross[20];
	int slag;

	chaff *pd1 = new chaff[2];
	chaff *pd2 = new(buffer) chaff[2];

	for(int i = 0; i < 2; i++)
	{
		cout << "#" << i+1 << ": " << endl;
		cout << "Enter the dross: ";
		cin.getline(dross, 20);
		cout << "Enter the slag: ";
		cin >> slag;
		cin.get();

		strcpy(pd1[i].dross, dross);
		strcpy(pd2[i].dross, dross);

		pd1[i].slag = pd2[i].slag = slag;
	}

	for(int i = 0 ; i < 2; i++)
	{
		show(pd1[i]);
		show(pd2[i]);
	}

	delete[] pd1;

	return 0;
}

void show(const chaff &p)
{
	cout << "The dross is: " << p.dross << endl;
	cout << "The slag is: " << p.slag << endl;
}
