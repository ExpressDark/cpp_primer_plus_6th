/*
这个练习让您编写处理数组和结构的函数。下面是程序的框架，请提供其中描述的函数，以完成该程序。
#include <iostream>
using namespace std;
const int SLEN =  30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
//getinfo() has two argumnets: a pointer to the first element of
//an array of student structures and an int representing the
//number of elemnets of the array. The function solicits and
//stores data about students. It terminates input upon filling
//the array or upon encountering a blank line for the student
//nmae. The function returns the actual number of array elemnets
//filled.
int getinfo(student pa[], int n);
//display1() takes a student structure as an argument
//and displays its contents
void display1(student st);
//display2() takes the address of student struture as an
//argument and displays the stucture's contents
void display2(const student * ps);
//display3() takes the address of the first elemnet of an array
//of student structures and the number of array elemnets as
//arguments and displays the contents of the structures
void display3(const student pa[], int n);
int main()
{
cout << "Enter class size: ";
int class_size;
cin >> class_size;
while(cin.get() != '\n')
	continue;
student * ptr_stu = new student[class_size];
int entered = getinfo(ptr_stu , class_size);
for(int i = 0 ; i < entered ; ++ i)
{
	display1(ptr_stu[i]);
	display2(&ptr_stu[i]);
}
display3(ptr_stu , entered);
delete [] ptr_stu;
cout << "Done\n";
return 0;
}
*/
#include <iostream>
using namespace std;
const int SLEN =  30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
//getinfo() has two argumnets: a pointer to the first element of
//an array of student structures and an int representing the
//number of elemnets of the array. The function solicits and
//stores data about students. It terminates input upon filling
//the array or upon encountering a blank line for the student
//nmae. The function returns the actual number of array elemnets
//filled.
int getinfo(student pa[], int n);
 
//display1() takes a student structure as an argument
//and displays its contents
void display1(student st);
 
//display2() takes the address of student struture as an
//argument and displays the stucture's contents
void display2(const student * ps);
 
//display3() takes the address of the first elemnet of an array
//of student structures and the number of array elemnets as
//arguments and displays the contents of the structures
void display3(const student pa[], int n);
 
int main()
{
cout << "Enter class size: ";
int class_size;
cin >> class_size;
while(cin.get() != '\n')
	continue;
 
student * ptr_stu = new student[class_size];
int entered = getinfo(ptr_stu , class_size);
for(int i = 0 ; i < entered ; ++ i)
{
	display1(ptr_stu[i]);
	display2(&ptr_stu[i]);
}
display3(ptr_stu , entered);
delete [] ptr_stu;
cout << "Done\n";
return 0;
}
 
int getinfo(student pa[],int n)  
{  
    int count=0;  
    for(int i=0;i<n;i++)  
    {  
        cout<<"Please enter the fullname:";  
        cin>>pa[i].fullname;  
        cout<<"\nPlease enter the hobby:";  
        cin>>pa[i].hobby;  
        cout<<"\nPlease enter the ooplevel:";  
        cin>>pa[i].ooplevel;  
        count++;  
    }  
    cout<<"\nEnter end!";  
    return count;  
  
}  
  
void display1(student st) 
{  
    cout<<"\ndisplay1:FullName:"<<st.fullname<<"\nhobby:"<<st.hobby  
        <<"\nooplevel:"<<st.ooplevel<<endl;  
}  
  
void display2(const student *ps)
{  
    cout<<"\ndispaly2:FullName:"<<ps->fullname<<"\nhobby:"<<ps->hobby  
        <<"\nooplevel:"<<ps->ooplevel<<endl;  
  
}  

void display3(const student pa[],int n)  
{  
    cout<<"\ndispaly3:"<<endl;  
    for(int i=0;i<n;i++)  
        cout<<i<<"::FullName:"<<pa[i].fullname<<"\nhobby:"<<pa[i].hobby  
        <<"\nooplevel:"<<pa[i].ooplevel<<endl;  
}  