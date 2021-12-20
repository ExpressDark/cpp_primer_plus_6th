/*
编写一个C++程序，如下述输出示例所示的那样请求并显示信息：
What is your first name? Beety Sue
What is your last name? Yewe
What letter grade do you deserve? B
What is your age? 22
Name: Yewe, Betty Sue
Grade: C
Age: 22
注意，该程序应该接受的名字包含多个单词。另外，程序将向下调整成绩，即向上调一个字母。假设用户请求A、B或C，所以不必担
心D和F之间的空档
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "what is your first name?";
    string firstName;
    getline(cin,firstName);
    cout << "what is your last name?";
    char lastName[20];
    cin.get(lastName,20).get();
    cout << "what lettere grade do you deserve";
    char grade;
    cin >> grade;
    cout << "what is your age?";
    int age;
    cin >> age;
    cout << "Name: " << lastName << ", " << firstName << endl;
    cout << "Grade: " << (char)(grade+1) << endl;
    cout << "Age:" << age << endl;
    return 0;
}