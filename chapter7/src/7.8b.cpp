/*
在不使用array类的情况下完成程序清单7.15所做的工作。编写两个这样的版本：
b.使用const char *数组存储表示季度名称的字符串，并使用一个结构，该结构只有一个成员——一个用于存储开支的double数组。
这种设计与使用array类的基本设计类似。
*/
#include <iostream>
#include <string>
#include <array>

using namespace std;

const int Seasons = 4;

const char *Snames[] = {"Spring", "Summer", "Fall", "Winter"};

struct Spend
{
	double money[Seasons];
};

void fill(double arr[], int size);
void show(const double arr[], int size);

int main()
{
	Spend expenses;

	fill(expenses.money, Seasons);
	show(expenses.money, Seasons);

	return 0;
}

void fill(double arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> arr[i];
	}
}

void show(const double arr[], int size)
{
	double total = 0.0;
	cout << "EXPENSES:" << endl;
	for(int i = 0; i < size; i++)
	{
		cout << Snames[i] << ": $" << arr[i] << endl;
		total += arr[i];
	}
	cout << "Total expenses: " << total << endl;
}
