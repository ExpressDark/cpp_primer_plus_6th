/*
William Wingate从事比萨饼分析服务。对于每个披萨饼，他都需要记录下列信息：
披萨饼公司的名称，可以有多个单词组成
披萨饼的直径
披萨饼的质量
请设计一个能够存储这些信息的结构，并编写一个使用这种结构变量的程序。程序将请求用户输入上述信息，然后显示这些信息。
请使用cin和cout
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
    pizza p;
	cout << "请输入披萨公司名称: ";
	getline(cin , p.companyName);
	cout << "请输入直径: ";
	cin >> p.diameter;
	cout << "请输入质量: ";
	cin >> p.mass;
	cout << p.companyName << endl << p.diameter << endl << p.mass << endl;
	return 0;

}