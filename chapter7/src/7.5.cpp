/*
定义一个递归函数，接受一个整型参数，并返回该参数的阶乘。前面讲过，3的阶乘写作3！，等于3 * 2！，以此类推：
而0！被定义为1.通用的计算公式是，如果n大于零 ， 则n! = n * (n - 1)!。在程序中对该函数进行测试，程序使用循环让用户
输入不同的值，程序将报告这些值的阶乘。
*/

#include <iostream>

using namespace std;

long long factorial(unsigned int n);

int main()
{
	int number;
	long long result;

	cout << "Enter a number for factorial: ";

	while(cin >> number)
	{
		result = factorial(number);
		cout << number << "! = " << result << endl;
		cout << "Enter a number for factorial: ";		
	} 

	return 0;
}

long long factorial(unsigned int n)
{
	if(n == 0)
		return 1;
	else
		return n * factorial(n-1);
}
