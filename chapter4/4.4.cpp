/*
编写一个程序，它要求用户首先输入其名，再输入其姓；然后程序使用一个逗号和空格将姓和名组合起来，并存储和
显示组合结果。请使用string对象和头文件string中的函数。下面是该程序运行时的情形：
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName;
    string lastName;
    cout << "Enter your first name:";
    getline(cin,firstName);
    cout << "Enter your first name:";
    getline(cin,lastName);
    cout << "Here's the information in a single string: " << lastName << " , " << firstName << endl;
    return 0;
}