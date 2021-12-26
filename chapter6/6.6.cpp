/*
编写一个程序，记录捐助给“维护合法权利团体”的资金。该程序要求用户输入捐献者数目，然后要求用户输入
每一个捐献者的姓名和款项。这些信息被储存在一个动态分配的结构数组中。每个结构有两个成员：用来储存姓名的字符数组
（或string对象）和用来储存款项的double成员。读取所有的数据后，程序将显示所有捐款超过10000的捐款者的姓名及其捐款数额。
该列表前应包含一个标题，指出下面的捐款者是重要捐款人（Grand Patrons)。然后，程序将列出其他的捐款者，该列表要以Patrons
开头。如果某种类别没有捐款者，则程序将打印单词“none”。该程序只显示这两种类别，而不进行排序。
*/
#include <iostream>
#include <string>
using namespace std;
struct people{
	string name;
	double money;
	int flag;
};
int main()
{
	cout << "请输入捐献者数目: ";
	int num , GP = 0;
	cin >> num;
	cin.get();
	people *p = new people[num];
	for(int i = 0 ; i < num ; ++ i){
		getline(cin , (p + i) -> name);
		cin >> (p + i) -> money;
		cin.get();
		if((p + i) -> money > 10000){
			(p + i) -> flag = 1;
			++ GP;
		}
		else
			(p + i) -> flag = 0;
	}
	cout << "Patrons: ";
	for(int i = 0 ; i < num ; ++ i){
		if((p + i) -> flag)
			cout << (p + i) -> name << " ";
	}
	cout << endl;
	cout << "Others: ";
	if(GP == num)
		cout << "none" << endl;
	else{
		for(int i = 0 ; i < num ; ++ i){
			if(!((p + i) -> flag))
				cout << (p + i) -> name << " ";
		}
	}
	cout << endl;
	return 0;
}