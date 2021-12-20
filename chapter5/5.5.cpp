/*
假设要销售《C++ For Fools》一书。请编写一个程序，输入全年中每个月的销售量（图书数量，而不是销售额）。
程序通过循环，使用初始化为月份字符串的char*数组（或string对象数组）逐月进行提示，并将输入的数据储存在一个int数组中。
然后，程序计算数组中各元素的总数，并报告这一年的销售情况
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "请输入第", str2 = "月的销售量";
    int sell[12];
    int month = 1,sum = 0;
    for( ;month <= 12; month++)
    {
        cout << str1 << month << str2;
        cin >> sell[month - 1];
        sum += sell[month - 1];
    }
    cout << sum << endl;
    return 0;
}