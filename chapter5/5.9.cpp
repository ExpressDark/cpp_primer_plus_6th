/*
编写一个满足前一个练习中描述的程序，但使用string对象而不是
字符数组。请在程序中包含头文件string，并使用关系运算符来进行比较测试
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    int num = 0;
    while((cin >> word) && word != "done")
    {
        num++;
    }
    cout << num << endl;
    return 0;
}