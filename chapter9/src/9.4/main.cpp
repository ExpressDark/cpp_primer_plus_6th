/*
namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    }
    void setSales(Sales & s, const double ar[], int n);
    void setSales(Sales & s);
    void showSales(const Sales & s);
}

  第一个文件是一个头文件，其中包含名称空间；第二个文件是一个源代码文件，他对这个名称空间进行扩展，以提供这三个函数的定义；
  第三个文件声明两个Sales对象，并使用setSales（）交互式版本为一个结构提供值，然后使用setSales（）的非交互式版本为另一个
  结构提供值。另外它还使用showSales（）来显示这两个结构的内容。
*/

#include "p4.h"

using namespace std;

void setSales(Sales &s, const double ar[], int n)
{
	double total = 0.0;

	for(int i = 0; i < n && i < 4; i++)
	{
		s.sales[i] = ar[i];
		total += s.sales[i];
	}

	s.average = total / i;
	s.max = s.sales[0];
	s.min = s.sales[0];

	for(int k = 1; k < i; k++)
	{
		s.max = (s.max > s.sales[k]) ? s.max : s.sales[k];
		s.min = (s.min < s.sales[k]) ? s.min : s.sales[k];
	}

	if(n < 4)
	{
		for(int k = n; k < 4; k++)
			s.sales[k] = 0;
	}
}

void setSales(Sales &s)
{
	double total = 0.0;

	cout << "Enter 4 sales quarters: " << endl;
	for(int i = 0; i < QUARTERS; i++)
	{
		cout << "#" << i+1 << ": ";
		cin >> s.sales[i];
		total += s.sales[i];

		if(i == 0)
		{
			s.max = s.sales[i];
			s.min = s.sales[i];
		}
		else
		{
			s.max = (s.max > s.sales[i]) ? s.max : s.sales[i];
			s.min = (s.min < s.sales[i]) ? s.min : s.sales[i];
		}
	}
	s.average = total / QUARTERS;
}

void showSales(const Sales &s)
{
	cout << "Sales of 4 quarters: " << endl;

	for(int i = 0; i < QUARTERS;i ++)
		cout << s.sales[i];
	cout << "Average = " << s.average << endl;
	cout << "Max = " << s.max << endl;
	cout << "Min = " << s.min << endl; 
}
