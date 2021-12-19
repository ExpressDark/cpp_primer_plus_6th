/*
编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），然后将身高转换
为英尺和英寸。该程序使用下划线字符来指示输入位置。另外，使用一个const符号常量来
表示转换因子。
*/
#include <iostream>
using namespace std;
const int Foot2Inch = 12;

int main()
{
    int height;
    cin >> height;
    cout << "您的身高为" << height / 12 << "英寸" 
        << height % 12 << "英尺" << endl;
        return 0;
}