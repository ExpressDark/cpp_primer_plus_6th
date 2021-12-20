/*
完成编程练习5，但这一次使用一个二维数组来存储输入——3年中每个月的销售量。程序将报告每年的销售量以及
三年的总销售量。
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "请输入第", str2 = "月的销售量", str3 = "年";
    int sell[3][12];
    int year = 1,month = 1,sum[3] = {0};
    for(; year <=3; year++)
    {
        for(int i = month; i <= 12; i++)
        {
            cout << str1 << year << str3 << i << str2;
            cin >> sell[year - 1][i - 1];
            sum[year - 1] += sell[year - 1][i - 1];
        }
    }
    cout << sum[0]<< endl;
    cout << sum[1] << endl;
    cout << sum[2] << endl;
    cout << sum[0] + sum[1] + sum[2] << endl;
    return 0;
}