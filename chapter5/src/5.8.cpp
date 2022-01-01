/*
编写一个程序，它使用一个char数组和循环来每次读取一个单词，直到用户输入done为止。随后，该程序指出用户输入
了多少个单词（不包括done在内）。下面是该程序的运行情况：
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char word[100];
    int num = 0;
    while((cin >> word) && strcmp(word, "done"))
    {
        num++;
    }
    cout << num << endl;
    return 0;
}