/*
编写一个要求用户输入数字的程序。每次输入后，程序都将报告到目前为止，所有输入的累计和。当用户输入0时，
程序结束
*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum = 0;
    while(cin >> num && num)
    {
        sum +=num;
    }
    cout << sum << endl;
    return 0;
}