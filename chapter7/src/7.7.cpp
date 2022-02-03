/*
 C++ Primer Plus第六版第七章编程练习 第7题 
Problem : 修改程序清单7.7中的3个数组处理函数，使之使用两个指针参数来表示区间。file_array()函数不返回实际读取了多少个
数字，而是返回一个指针，该指针指向最后被填充的位置：其他的函数可以将该指针作为第二个参数，以标识数据结尾。
*/
#include <iostream>
using namespace std;

double *fill_array(double *a);
void show_array(double *a , double *b);
void revalue(double r , double *a , double *b);

int main()
{
	double a[5];
	double *e = fill_array(a);
	show_array(a , e);
	revalue(0.5 , a , e);
	show_array(a , e);
	return 0;
}
 
double *fill_array(double *a)
{
	int i = 0;
	while(cin >> a[i++])
		if(i == 5)
			break;
	return &a[i];
}
 
void show_array(double *a , double *b)
{
	while(a != b){
		cout << *a << " ";
		 ++ a;
	}
	cout << endl;
}
 
void revalue(double r , double *a , double *b)
{
	while(a != b){
		(*a) *= r;
		++ a;
	}
}