/*
结构CandyBar包含3个成员，如编程练习5所示。请编写一个程序，创建一个包含3个元素的CandyBar数组，并将它们初始化
为所选择的值，然后显示每个结构的内容。
*/
#include <iostream>
#include <string>
using namespace std;
struct CandyBar{
		string name;
		double weight;
		int cal;
	};
int main()
{
	CandyBar snack[3] = {
		{
			"Yuuji1",
				1.1,
				1
		},
		{
			"Yuuji2",
				1.2,
				2
			},
			{
				"Yuuji3",
					1.3,
					3
			}
	};
	cout << snack[0].name << endl << snack[0].weight << endl << snack[0].cal << endl << snack[1].name << endl << snack[1].weight << endl << snack[1].cal << endl << snack[2].name << endl << snack[2].weight << endl << snack[2].cal << endl;
	return 0;
}