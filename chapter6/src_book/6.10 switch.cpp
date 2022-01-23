#include <iostream>

using namespace std;

void showmenu();
void report();
void comfort();

int main()
{
	showmenu();

	int choice;

	cin >> choice;
	while(choice != 5)
	{
		switch(choice)
		{
			case 1: cout << "\a\n";
				break;
			case 2: report();
				break;
			case 3: cout << "The boss was in all day." << endl;
				break;
			case 4: comfort();
				break;
			default: cout << "That is not a choice." << endl;
		}
		showmenu();
		cin >> choice;
	}

	return 0;
}

void showmenu()
{
	cout << "Please enter 1, 2, 3, 4, 5 as your choice:" << endl;
	cout << "1) alarm	2) report" << endl;
	cout << "3) alibi	4) comfort" << endl;
	cout << "5) quit" << endl;
}

void report()
{
	cout << "It's been an excellent week for business.\n"
            "Sales are up 120%. Expenses are down 35%." << endl; 
}

void comfort()
{
	cout << "Your employees think you are the finest CEO!" << endl
            << "in the industry. The board of directors think.\n"
            "you are the finest CEO in the industry.\n";
}
