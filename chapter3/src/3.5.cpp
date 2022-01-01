/*
编写一个程序，要求用户输入全球当前的人口和美国当前的人口（或其他国家的人口）。将这些信息存储在long long变量
中，并让程序显示美国（或其他国家）的人口占全球人口的百分比。该程序的输出应与下面类似:
Enter the world's population: 6898758899
Enter the population of the US: 310783781
The population of the US is 4.50492% of the world population.
*/
#include <iostream>
using namespace std;
int main()
{
    long long worldPopulation;
    long long UsPopulation;
    cout << "Enter the world's population:";
    cin >> worldPopulation;
    cout << "Enter the population of the US:";
    cin >> UsPopulation;
    cout << "The population of the US is " << (static_cast<double>(UsPopulation) / static_cast<double>(worldPopulation) ) * 100
    << "% of the world population." << endl;
    return 0;
}