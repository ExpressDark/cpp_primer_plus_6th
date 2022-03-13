/*
编写一个函数，他接受一个指向string对象的引用作为参数，并将该string对象的内容转换为大写，为此可用表6.4描述的函数toupper（）。然后编写一个程序，
它通过使用一个循环让您能够使用不同的输入来测试这个函数，该程序的运行情况如下：
Enter a string (q to quit): go away
GO AWAY
Next string (q to quit): good grief!
GOOD GRIEF!
Next string (q to quit): q
Bye.
*/
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void Toupper(string& str);


int main()
{
    string str;
    getline(cin, str);
    while(str[0] != 'q')
    {
        Toupper(str);
        getline(cin, str);
    }
    cout << "Bye. "<< endl;
    return 0;
}

void Toupper(string& str)
{
    for(int i = 0; i < str.size(); i++)
    {

        str[i] =toupper(str[i]);
        cout << str[i];
    }
    cout << endl;
}


