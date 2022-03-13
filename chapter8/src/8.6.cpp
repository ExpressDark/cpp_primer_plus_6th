/*
编写模板函数maxn（），它将有一个T类型元素组成得数组和一个表示数组元素数目得整数作为参数，并返回数组中最大得元素。在程序对它进行测试，该程序使用一个
包含6个int元素得数组和一个包含4个double元素得数组来调用该函数。程序还包含一个具体化，它将char指针数组和数组中的指针数量作为参数，并返回最长的字符串
地址。如果有多个这样的字符串，则返回其中第一个字符串的地址。使用由5个字符串指针组成的数组来测试该具体化。
*/
#include <iostream>
#include <string>

using namespace std;

template <typename T>
T maxn(T t[], int n);

template <>
string maxn(string str[], int n);

int main()
{
	int arr_i[6] = {1, 3, 5, 7, 9, 11};
	double arr_d[4] = {22.2, 13.8, 17.9, 38.5};
	string str[5] = {"Hello world", "Good morning", "I love you, Rick", "What's this", "ByeBye"};

	cout << "The max value of int arr: " << maxn(arr_i, 6) << endl;
	cout << "The max value of double arr: " << maxn(arr_d, 4) << endl;
	cout << "The max value of str: " << maxn(str, 5) << endl;

	return 0;
}

template <typename T>
T maxn(T t[], int n)
{
	T max = t[0];

	for(int i = 1; i < n; i++)
	{
		if(max < t[i])
			max = t[i];
	}

	return max;
}

template <> 
string maxn(string str[], int n)
{
	int pos = 0;
	for(int i = 1; i < n; i++)
	{
		if(str[pos].size() < str[i].size())
			pos = i;
	}

	return str[pos];
}
