//编写一个c++程序，让用户输入其年龄，然后显示该年龄包含多少个月
#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "输入你的年龄";
    cin >> age;
    cout << "你的年龄包含" << age * 12 << "个月" << endl;
    return 0;1
}