/*
编写模板函数max5（），它将一个包含5个T类型元素的数组作为参数，并返回数组中最大的元素（由于长度固定，因此可以在循环中使用硬编码，而不必通过参数
来传递）。在一个程序中使用该函数，将T替换为一个包含5个int值得数组和一个包含5个double值得数组，以测试该函数。
*/

#include <iostream>

using namespace std;

template <typename T>
T max5(T arr[]);


int main()
{
    int arr1[5] = {1,2,3,4,5};
    double arr2[5] = {5.1, 2.1, 3.1, 1.1, 2.0};
    int result1 = max5(arr1);
    double result2 = max5(arr2);
    cout << "int:" << result1 << endl;
    cout << "double:" << result2 << endl;
    return 0;
}

template <typename T>
T max5(T arr[])
{
	T max = arr[0];

	for(int i = 1; i < 5; i++)
	{
		if(max < arr[i])
			max = arr[i];
	}

	return max;
}
