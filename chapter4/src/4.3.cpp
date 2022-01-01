/*
编写一个程序，它要求用户首先输入其名，然后输入其姓；然后程序使用一个逗号和空格将姓和名组合起来，并存储
和显示组合结果。请使用char数组和头文件cstring中的函数。下面是该程序运行时的情形：
Enter your first name: Flip
Enter your last name: Fleming
Here's the information in a single string: Fleming , Flip
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int ArSize = 20;
    char firstName[ArSize];
    char lastName[ArSize];
    cout << "Enter your first name:";
    cin.get(firstName, ArSize).get();
    cout << "Enter your last name:";
    cin.get(lastName,ArSize).get();
    cout << "Here's the information in a single string: " << lastName << " , " << firstName << endl;
    return 0;
}