/*
加入Benevolent Order of Programmer后，在BOP大会上，人们便可以通过加入者的真实姓名、头衔或秘密BOP姓名来
了解他（她）。请编写一个程序，可以使用真实姓名、头衔、秘密姓名或成员偏好来列出成员。编写该程序时，请使用下面的结构：
/ Benevolent Order of Programmers name structure
struct bop{
char fullname[strsize]; // real name
char title[strsize];    // job title
char bopname[strsize];  // secret BOP name
int preference;         // 0 = fullname , 1 = title , 2 = bopname
};
该程序创建一个由上述结构组成的小型数组，并将其初始化为适当的值。另外，该程序使用一个循环，让用户在下面的选项中进行
选择：
a. display by name         b. display by title
c. display by bopname      d. display by preference
q. quit
注意，“display by preference”并不意味着显示成员的偏好，而是意味着根据成员的偏好来列出成员。例如，如果偏好号为1，
则选择d将显示程序员的头衔。该程序的运行情况如下：
Benevolent Order of Programmers Report
a. display by name         b. display by title
c. display by bopname      d. display by preference
q. quit
Enter your choice: a
Wimp Macho
Raki Rhodes
Celia Laiter
Hoppy Hipman
Pat Hand
Next choice: d
Wimp Macho
Junior Programmer
MIPS
Analyst Trainee
LOOPY
Next choice: q
Bye!
*/
#include <iostream>

using namespace std;

const int strname = 20;

struct bop{
    char fullname[strname];
    char title[strname];
    char bopname[strname];
    int preference;
};

bop people[5] = {
		{
			"Wimp Macho",
			"BOSS",
			"WM",
			0
		},
		{
			"Raki Rhodes",
			"Manager",
			"RR",
			2
		},
		{
			"Celia Laiter",
			"MIPS",
			"CL",
			1
		},
		{
			"Hoppy Hipman",
			"Analyst Trainee",
			"AT",
			1
		},
		{
			"Pat Hand",
			"Student",
			"PH",
			2
		}
	};

int main()
{
    cout << "Benevolent Order of Programmers Report\na. display by name         b. display by title" << endl;
    cout << "c. display by bopname      d. display by preference\nq. quit" << endl;
    cout << "Enter your choice: ";
    char choice;
    while(cin >> choice && choice != 'q')
    {
        switch(choice){
		case 'a' : 
            for(int i = 0 ; i < 5 ; ++ i)
		        cout << people[i].fullname << endl;
            break;
		case 'b' :
            for(int i = 0 ; i < 5 ; ++ i)
		        cout << people[i].title << endl;
            break;
		case 'c' : 
            for(int i = 0 ; i < 5 ; ++ i)
		        cout << people[i].bopname << endl;
            break;
		case 'd' : 
            for(int i = 0 ; i < 5 ; ++ i){
		        if(people[i].preference == 0)
			        cout << people[i].fullname << endl;
		        else if (people[i].preference == 1)
			        cout << people[i].title << endl;
	        	else 
		        	cout << people[i].bopname << endl;
        }}
		cout << "Next choice: ";
}
    cout << "Bye!" << endl;
	return 0;
}