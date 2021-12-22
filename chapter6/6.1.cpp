/*
请编写一个程序，读取键盘输入，直到遇到@符号为止，并回显输入（数字除外），同时将大写字符转换为小写，
将小写字符转换为大写（别忘了cctype函数系列）
*/
#include <iostream>
using namespace std;
int main()
{
	char ch;
	while((ch = cin.get()) != '@'){
		if(ch >= 'A' && ch <= 'Z')
			cout << (char)(ch + ('a' - 'A'));
		else cout << ch;
	}
	cout << endl;
	return 0;
}
