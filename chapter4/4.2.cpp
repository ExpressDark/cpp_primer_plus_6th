/*
修改程序清单4.4，使用C++ string类而不是char数组
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    string dessert;
    cout << "Enter your name:" << endl;
    getline(cin,name);
    cout << "Enter your favorite dessert:" << endl;
    getline(cin,dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0; 
}
