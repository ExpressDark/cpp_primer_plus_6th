/*
许多州的彩票发行机构都使用如程序清单7.4所示的简单彩票玩法的变体。在这些玩法中，玩家从一组被称为域号码
(field number)的号码中选择几个。例如，可以从域号码1~47中选择5个号码：还可以从第二个区间（如1~27）选择一个号码
（称为特选号码）。要赢得头奖，必须正确猜中所有的号码。中头奖的几率是选中所有域号码的几率与选中特选号码几率的乘积。
例如，在这个例子中，中头奖的几率是从47个号码中正确选取5个号码的几率与从27个号码中选择1个号码的几率的成绩。请修改
程序清单7.4，以计算中得这种彩票头奖的几率。
*/
#include <iostream>

using namespace std;

long double probability(unsigned int numbers, unsigned int picks);

int main()
{
	unsigned int total, choices;

	long double field = probability(47, 5);
	long double special = probability(27, 1);
	long double result = field * special;
	cout << result << endl;

	cout << "Bye" << endl;

	return 0;
}

long double probability(unsigned int numbers, unsigned int picks)
{
	double n, p;
	long double result = 1.0;

	for(n = numbers, p = picks; p > 0; n--, p--)
		result = result * (n / p);

	return result;
}
