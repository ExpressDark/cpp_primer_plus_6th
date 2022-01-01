#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_longlong = LLONG_MAX;
    //sizeof 不是一个函数，是一个运算符，后边可以接数据类型或者数据变量
    cout << "int is " << sizeof(n_int) <<" bytes." << endl;
    cout << "short is " << sizeof(short) <<" bytes." << endl;
    cout << "long is " << sizeof n_long <<" bytes." << endl;
    cout << "long long is " << sizeof(long long)<<" bytes." << endl;

    cout << "Maximum values:" << endl;
    cout << "int:" << n_int << endl;
    cout << "short:" << n_short << endl;
    cout << "long:" << n_long << endl;
    cout << "long long :" << n_longlong << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte =" << CHAR_BIT << endl;
    return 0;
}