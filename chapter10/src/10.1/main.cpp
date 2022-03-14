/*
为复习题5描述的类提供方法定义，并编写一个小程序来演示所有的特性。

*/
#include <iostream>
#include "account.hpp"

int main()
{
	BankAccount n1("Rick", "0001", 1000);
	n1.Show();

	cout << endl;
	n1.AddMoney(500);
	cout << "After deposit 500: " << endl;
	n1.Show();

	cout << endl;
	n1.SubMoney(800);
	cout << "After withdraw 800: " << endl;
	n1.Show();

	return 0;
}
