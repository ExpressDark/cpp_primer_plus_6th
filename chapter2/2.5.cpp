/*编写一个程序，其中main（）调用一个用户自定义的函数
  （以摄氏温度值为参数，并返回相应的华式温度值）
  该程序按下面的格式展开：
  Please enter a Celsius value: 20
  20 degree Celsius is 68 degree Fahrenheit.
*/
#include <iostream>
using namespace std;

int main()
{
    double celsius;
    cout << "Please enter a Celisu value:";
    cin >> celsius;
    cout << celsius << " degree Celsius is "
        << celsius * 1.8 + 32.0 << " degree Fahrenheit." << endl;
        return 0;
}