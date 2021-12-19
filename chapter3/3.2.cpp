/*
编写一个小程序，要求以几英尺几英寸的方式输入其身高，并以磅为单位输入其体重。（使用3个变量来存储这些信息。）
该程序报告其BMI（Body Mass Index，体重指数）。为了计算BMI，该程序以英寸的方式指出用户的身高（1英尺为12英寸），并将
以英寸为单位的身高转换为以米为单位的身高（1英寸=0.0254米)。然后，将以磅为单位的体重转换为以千克为单位的体重（1千克=
2.2磅）。最后，计算相应的BMI——体重（千克）除以身高（米）的平方。用符号常量表示各种转换因子。
*/
#include <iostream>
#include <cmath>
using namespace std;
const int Foot2Inch = 12;
const double Inch2Meter = 0.0254;
const double height2Kg = 1 / 2.2;

int main()
{
    int inchFoot;
    int inchInch;
    int weight;
    cout << "输入您的身高（英尺）:";
    cin >> inchFoot;
    cout << "输入您的身高（英寸）";
    cin >> inchInch;
    cout << "输入您的体重";
    cin >> weight;
    cout << "您的BMI为" << ( weight * height2Kg ) / pow(((inchFoot * Foot2Inch + inchInch) * Inch2Meter),2);
    return 0;
}