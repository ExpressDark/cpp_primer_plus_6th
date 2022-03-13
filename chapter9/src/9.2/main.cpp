/*
修改程序9.9：用string对象替代字符数组。这样，该程序将不再需要检查输入的字符串是否过长，同时可以将输入字符串通字符串“”进行比较，
以判断是否为空行。
*/
#include <iostream>
#include <string>

using namespace std;

void strcount(const string str);

int main()
{
	string input;
	char next;

	cout << "Enter a line: " << endl;
	getline(cin, input);
	while(input != "")
	{
		strcount(input);
		cout << "Enter next line (empty line to quit): " << endl;
		getline(cin, input);
	}

	cout << "ByeBye" << endl;

	return 0;
}

void strcount(const string str)
{
	static int total = 0;
	int count = 0;

	count = str.size();
	total += count;
	cout << count << " characters" << endl;
	cout << total << " characters total" << endl;
}

