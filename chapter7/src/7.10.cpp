/*
设计一个名为calculate（）的函数，它接受两个double值和一个指向函数的指针，而被指向的函数接受两个double参数
并返回一个double值。calculate（）函数的类型也是double，并返回被指向的函数使用calculate（）的两个double参数
计算得到的值，例如，假设add（）函数的定义如下：
double add(double x, double y)
{
    return x * y;
}
则下述的代码中的函数调用calculate（）把2.5和10.4传递给add（）函数，并返回add（）的返回值（12.9）:
double q = calculate(2.5, 10.4, add);
请编写一个程序，他调用上述两个函数和至少一个与add（）类似的函数，该程序使用循环来让用户成对地输入数字，对于
每对数字，程序都使用calculate（）来调用add（）和至少一个其他的函数。如果读者爱冒险，可以尝试创建一个指针数组。
其中的指针指向add（）样式的函数，并编写一个循环，使用这些指针连续让calculate（）调用这些函数。提示：下面是声
明这种指针数组的方式，其中包含三个指针：
double (*pf[3])(double, double);
可以采用数组初始化语法，并将函数名作为地址来初始化这样的数组。
*/
#include <iostream>

using namespace std;

double add(double x, double y);
double sub(double x, double y);
double calculate(double x, double y, double (*pt)(double, double));


int main()
{
    double a = calculate(10.4, 2.5, add);
    double b = calculate(10.4, 2.5, sub);
    cout << "add = " << a << endl;
    cout << "sub = " << b << endl;
    return 0;
}

double add(double x, double y)
{
    return x + y;
}

double sub(double x, double y)
{
    return x - y;
}

double calculate(double x, double y, double (*pt)(double, double))
{
    return pt(x, y);
}