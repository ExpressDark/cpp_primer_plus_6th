/*
const int Len = 40;

struct golf
{
	char fullname[Len];
	int handicap;
};

void setgolf(golf &g, const char *name, int hc);
int setgolf(golf &g);
void handicap(golf &g, int hc);
void showgolf(const golf &g);
根据这个头文件，创建一个多文件程序。其中的一个文件名为golf.cpp，它提供了与头文件中的原型匹配的函数定义；
另一个main（），并演示原型函数的所有特性。
*/
#include <iostream>
#include "golf.h"

using namespace std;

const int SIZE = 2;

int main()
{
	golf g[SIZE];
	int count = 0;

	cout << "Please enter the information of golf players: " << endl;
	while((count < SIZE) && (setgolf(g[count])))
	{
		cout << "Please enter next player: " << endl;
		count++;
	}

	cout << "\nShow all golf players informations: " << endl;
	for(int i = 0; i < count; i++)
		showgolf(g[i]);

	cout << "\nReset all the players information: " << endl;
	for(int i = 0; i < count; i++)
	{
		handicap(g[i], 90);
		showgolf(g[i]);
	}

	return 0;
}
