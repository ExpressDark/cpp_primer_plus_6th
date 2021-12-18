//编写一个c++程序，它要求用户输入一个以long为单位的距离，然后将它转换为码（1long=220码）
#include <iostream>

using namespace std;

int main()
{
    long distance;
    cin >> distance;
    cout << "输入的距离是" << distance << "long，经过转换后为" 
        << distance * 220 << "码" << endl;
    return 0;
}
