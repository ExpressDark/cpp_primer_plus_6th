/*
编写一个程序，要求用户输入最多10个高尔夫成绩，并将其存储在一个数组中。程序允许用户提早结束输入，并在
一行上显示所有成绩，然后报告平均成绩。请使用3个数组处理函数来分别进行输入、显示和计算平均成绩。请使用3个数组
处理函数来分别
*/
#include <iostream>

using namespace std;

int input(double arr[]);
void output(double arr[] , int n);
double fun(double arr[] , int n);

int main()
{
	double a[10];
	int num = input(a);
	output(a , num);
	return 0;
}
 
int input(double arr[])
{
	int i;
	for(i = 0 ; i < 10 ; ++ i){
		cin >> arr[i];
		if(arr[i] <= 0)
			break;
	}
	return i;
}
 
void output(double arr[] , int n)
{
	for(int i = 0 ; i < n ; ++ i)
		cout << arr[i] << " ";
	cout << fun(arr, n) << endl;
}
 
double fun(double arr[] , int n)
{
	double sum = 0;
	for(int i = 0 ; i < n ; ++ i)
		sum += arr[i];
	sum /= n;
	return sum;
}