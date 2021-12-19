/*编写一个程序，要求用户以整数方式输入秒数（使用long或long long变量存储），然后以天、小时、分钟和秒的方式
显示这段时间。使用符号常量来表示每天有多少小时、每小时有多少分钟一集每分钟有多少秒。该程序的输出应与下列类似：
Enter the number of seconds: 31600000
31600000 seconds = 365 days, 17 hours , 46 minutes , 40 seconds
*/
#include <iostream>
using namespace std;
const int seconds2minutes = 60;
const int minutes2hours = 60;
const int hours2day = 24; 
int main()
{
    long long seconds;
    cout << "Enter the number of seconds :";
    cin >> seconds;
    cout << seconds << " seconds = " << seconds / seconds2minutes / minutes2hours / hours2day
    << " days, " << seconds / seconds2minutes / minutes2hours % hours2day  << " hours , "
    << seconds / seconds2minutes % minutes2hours << "minutes , "
    << seconds % seconds2minutes << " seconds" << endl;
    return 0;
}