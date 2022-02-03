/*
编写一个程序，它使用下列函数：
Fill_array()将一个double数组的名称和长度作为参数。它提示用户输入double值，并将这些值存储到数组中。当数组被填满或
用户输入了非数字时，输入将停止，并返回实际输入了多少个数字。
Show_array()将一个double数组的名称和长度作为参数，并显示该数组的内容。
Reverse-array()将一个double数组的名称和长度作为参数，并将存储在数组中的值的顺序反转。
程序将使用这些函数来填充数组，然后显示数组；反转数组，然后显示数组；反转数组中除第一个和最后一个元素之外的所有元素，
然后显示数组
*/
 #include <iostream>

using namespace std;

const int MAX = 40;

int Fill_array(double arr[], int size);
void Show_array(double arr[], int size);
void Reverse_array(double arr[], int size);

int main(void)
{
	double array[MAX];

	int size = Fill_array(array, MAX);

	Show_array(array, size);
	Reverse_array(array, size);
	Show_array(array, size);

	Reverse_array(&array[1], size - 2);
	Show_array(array, size);

	return 0;
}

int Fill_array(double arr[], int size)
{
	int i;
	double temp;

	for(i = 0; i < size; i++)
	{
		cout << "Please enter a number:";
		cin >> temp;
		if(!cin)
		{
			cin.clear();
			while(cin.get() != '\n');
			break;
		}
		else
			arr[i] = temp;
	}
	return i;
}

void Show_array(double arr[], int size)
{
	cout << "The array content: " << endl;
	for(int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void Reverse_array(double arr[], int size)
{
	double temp;

	for(int i = 0; i < size/2; i++)
	{
		temp = arr[i];
		arr[i] = arr[size-i-1];
		arr[size-i-1] = temp;
	}
}
