/*
完成编程练习7，但使用new来为结构分配内存，而不是声明一个结构变量。另外，让程序在请求输入比萨饼公司名称
之前输入比萨饼的直径
*/
#include <iostream>
#include <string>
using namespace std;

struct pizza{
    string companyName;
    double diameter;
    double mass;
};

int main()
{
    pizza* p = new pizza;
    cout << "请输入直径: ";
	cin >> p->diameter;
	cout << "请输入披萨公司名称: ";
    cin.get();
	getline(cin , p->companyName);
	cout << "请输入质量: ";
	cin >> p->mass;
	cout << p->companyName << endl << p->diameter << endl << p->mass << endl;
    delete p;
	return 0;

}