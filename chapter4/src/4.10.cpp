/*
编写一个程序，让用户输入三次40码跑的成绩（如果您愿意，也可让用户输入40米跑的成绩）。并显示次数和平均
成绩。请使用一个array对象来存储数据（如果编译器不支持array类，请使用数组）
*/
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<double, 3> grade;
    double firstGrade,secondGrade,thirdGrade;
    cin >> firstGrade;
    cin >> secondGrade;
    cin >> thirdGrade;
    grade[0] = firstGrade;
    grade[1] = secondGrade;
    grade[2] = thirdGrade;
    cout << firstGrade << endl << secondGrade << endl << thirdGrade << endl;
    return 0;
}