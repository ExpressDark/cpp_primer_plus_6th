//编写一个c++程序，它使用3个用户定义的函数（包括main（）），并生产一下输出
//Three blind mice
//Three blind mice
//see how they run
//see how they run
//其中一个函数要调用2次，该函数生成前两行，另一个函数也调用2次，并生成其余的输出。
#include <iostream>
using namespace std;

void function1()
{
    cout << "Three blind mice" << endl;
}

void function2()
{
    cout << "see how they run" << endl;
}

int main()
{
    function1();
    function1();
    function2();
    function2();
    return 0;
}