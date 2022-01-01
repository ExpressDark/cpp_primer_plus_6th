/*
编写一个菜单驱动程序的雏形。该程序显示一个提供4个选项的菜单——每个选项用一个字母标记。如果用户使用有效
选项之外的字母进行响应，程序将提供用户输入一个有效的字母，直到用户这样做为止。然后，该程序使用一条switch语句，
根据用户的选择执行一个简单操作。该程序的运行情况如下：
Please enter one of the following choices:
c) carnivore                     p) pianist
t) tree                          g) game
Please enter a c , p , t , or g: q
Please enter a c , p , t , or g: t
A maple is a tree.
*/
#include <iostream>
#include <string>
using namespace std;

void choiceFunction(char c)
{
    char p;
    switch (c)
    {
    case 'c'/* constant-expression */:
         cout << "A maple is a carnivore";
        /* code */
    case 'p':
         cout << "A maple is a pianist";
         break;
    case 't':
         cout << "A maple is a tree";
         break;
    case 'g':
        cout << "A maple is a game";
        break;
    default:
        cout << "Please enter a c, p, t, or g :";
        cin >> p;
        choiceFunction(p);
    }
};

int main()
{
    cout << "Please enter one of the following choices:" << endl;
    cout << "c) carnivore           p)pianist" << endl;
    cout << "t) tree                g)game" << endl;
    cout << "Please enter a c, p, t, or g :";
    char c;
    cin >> c;
    choiceFunction(c);
   

}