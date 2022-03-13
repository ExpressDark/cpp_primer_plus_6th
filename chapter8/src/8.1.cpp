/*
编写通常接受一个参数（字符串地址），并打印该字符串的函数。然而，如果提供了第二个参数则该函数打印字符串的次数将为该函数被调用的次数
(注意，字符串的打印不第于至二个参数的值，而等于函数被调用的次数)。是的，这是一个非常可笑的函数，但它让您能够使用本章介绍的一些技术。
在一个简单的程序中使用该函数，以演示该函数是如何工作的。
*/
#include <iostream>

using namespace std;


void message(char* addr, int n = 0);

int main()
{
    char str1[] = "string";
    message(str1);
    cout << endl;
    message(str1,10);
    return 0;
}

void message(char* addr, int n)
{
    if(!n)
        cout << addr << endl;
    else
        for(int i =0; i < n; i++)
            cout << addr << endl;

}

