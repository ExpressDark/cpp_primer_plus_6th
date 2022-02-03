/*
编写一个程序，不断要求用户输入两个数，直到其中一个为0。对于每两个数，程序将使用一个函数来计算它们的
调和平均数，并将结果返回给main()，而后者将报告结果。调和平均数指的是倒数平均值的倒数，计算公式如下：
	调和平均数 = 2.0 * x * y / (x + y)
*/
#include <iostream>

using namespace std;

double fun(double x , double y);

int main()
{
	cout << "请输入两个数: ";
	double a , b;
	while(cin >> a >> b && a && b){
		cout << fun(a , b) << endl;
		cout << "请输入两个数: ";
	}
	cout << "BYE!" << endl;
	return 0;
}
 
double fun(double x , double y)
{
	return 2.0 * x * y / (x + y);
}