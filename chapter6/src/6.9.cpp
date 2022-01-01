/*
完成编程练习6，但从文件中读取所需的信息。该文件的第一项应为捐款人数，余下的内容应为成对的行。在每一对中，
第一行为捐款人姓名，第二行为捐款数额。即该文件类似于下面：
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct people{
	string name;
	double money;
	int flag;
};
int main()
{
	fstream infile;
	infile.open("2.txt");
	int num , GP = 0;
	infile >> num;
	infile.get();
	people *p = new people[num];
	for(int i = 0 ; i < num ; ++ i){
		getline(infile , (p + i) -> name);
		infile >> (p + i) -> money;
		infile.get();
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

