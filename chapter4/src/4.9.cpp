/*
完成编程练习6，但是用new来动态分配数组，而不是声明一个包含3个元素的CandyBar数组
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
    CandyBar *snack = new CandyBar[3];
	snack[0] = 
		{
			"Yuuji1",
				1.1,
				1
		};
	snack[1] ={
			"Yuuji2",
				1.2,
				2
			};
	snack[2]  ={
				"Yuuji3",
					1.3,
					3
			};
	cout << snack[0].name << endl << snack[0].weight << endl << snack[0].cal << endl << snack[1].name << endl << snack[1].weight << endl << snack[1].cal << endl << snack[2].name << endl << snack[2].weight << endl << snack[2].cal << endl;
	delete [] snack;
    return 0;
}