/*
CandyBar结构包含3个成员。第一个成员存储candy bar的品牌名称;第二个成员存储candy bar 的重量(可能有小数)；第三个成员存储candy bar的热量(整数)。
请编写一个程序，它使用一个这样的函数，即将CandyBar的引用、char指针、double 和int作为参数，并用最后3个值设置相应的结构成员。最后3个参数的默认
值分别为"Millennium Munch"、2.85和350.另外，该程序还包含一个以Candy Bar的引用为参数，并显示结构内容的函数。请尽可能的使用const。
*/
#include <iostream>
#include <cstring>

using namespace std;

const int Size = 30;

struct CandyBar
{
    char name[Size];
    double weight;
    int heat;
    /* data */
};



void fun1(CandyBar& candyBar, const char* name = "Millennium Munch", const double weight = 2.85, const int heat = 350);
void showFun(const CandyBar& candybar);

int main()
{
    CandyBar candy;
    fun1(candy);
    showFun(candy);
    return 0;
}

void fun1(CandyBar& candyBar,const char* name,const double weight,const int heat)
{
    strcpy(candyBar.name, name);
    candyBar.weight = weight;
    candyBar.heat = heat;
}

void showFun(const CandyBar& candybar)
{
    cout << candybar.name << endl;
    cout << candybar.weight << endl;
    cout << candybar.heat << endl;
}

