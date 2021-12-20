/*
使用array对象（而不是数组）和long double（而不是long long）重新编写程序清单5.4，并计算100！的值。
*/
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array <long double, 100> factorials = {1,1};
    for(int i = 2; i <= 100; i++)
    {
        factorials[i] = factorials[i-1] * i;
    }
    for(int i = 0; i <= 100; i++)
    { 
        cout << i << "! = " << factorials[i] << endl;
    }
    return 0;
}