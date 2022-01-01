/*
编写一个程序，要求用户按欧洲风格输入汽车的耗油量（每100公里消耗的汽油量（升）），然后将其转换为美国风格的
耗油量——每加仑多少英里。注意，除了使用不同的单位计量外，美国方法（距离/燃料)与欧洲方法（燃料/距离）相反。100公里
等于62.14英里，1加仑等于3.875升。因此，19mpg大约合12.41/100km,127mpg大约合8.71/100km
*/
#include <iostream>

using namespace std;

int main()
{
    double oil;
	cin >> oil;
	const double Mile2Kilometre =62.14; //英里转公里
	const double Gal2Liter = 3.875; //加仑转升
	cout  << Mile2Kilometre /( oil /Gal2Liter ) << endl;
	return 0;
}

/*
此题题目有误，27mpg大约合8.71/100km。
*/