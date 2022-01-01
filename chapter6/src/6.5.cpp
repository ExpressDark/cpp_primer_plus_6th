/*在Neutronia王国，货币单位是tvarp,收入所得税的计算方式如下：
5000 tvarps: 不收税
5001~15000 tvarps: 10%
15001~35000 tvarps: 15%
35000 tvarps 以上： 20%
例如，收入为38000 tvarps时，所得税为5000 * 0.00 + 10000 * 0.10 + 20000 * 0.15 + 3000 * 0.20，即4600 tvarps。请编写
一个程序，使用循环来要求用户输入收入，并报告所得税。当用户输入负数或非数字时，循环将结束。
*/

#include <iostream>
using namespace std;
int main()
{
	double money , sum;
	while(cin >> money && money >= 0){
		if(money <= 5000)
			cout << money * 0.00 << endl;
		else if (money <= 15000){
			sum = (money - 5000) * 0.10;
			cout << sum << endl;
		}
		else if(money <= 35000){
			sum = 10000 * 0.10 + (money - 15000) * 0.15;
			cout << sum << endl;
		}
		else {
			sum = 10000 * 0.10 + 20000 * 0.15 + (money - 35000) * 0.20;
			cout << sum << endl;
		}
	}
	return 0;
}
