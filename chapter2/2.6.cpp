/*编写一个程序，其main（）调用一个用户定义的函数
（以光年值为参数，并返回对应的天文单位的值）
按下面的格式展开：
Enter the number of the light years: 4.2
4.2 light years = 265608 astronomical units.
*/
#include <iostream>
using namespace std;
int main()
{
    double lightYears;
    cout << "Enter the number of the light years:";
    cin >> lightYears;
    cout << lightYears << " light years = "
        << lightYears * 63240 << " astronomical units." << endl;
        return 0;
}