/*
编写一个程序，它打开一个文件，逐个字符的读取该文件，直到到达文件末尾，然后指出该文件包含多少个字符
*/
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("1.txt");
    char ch;
    int num = 0;
    while(inFile >> ch)
    {
        if(isalpha(ch))
            num++;
    }
    cout << num++ << endl;
    return 0;
}