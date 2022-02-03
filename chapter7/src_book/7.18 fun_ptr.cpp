#include <iostream>

using namespace std;

double betsy(int);
double pam(int );
void estimate(int lines, double (*pf)(int));

int main(void)
{
	int code;

	cout << "How many lines of code do you need?: ";
	cin >> code;
	cout << "Here is betsy's estimate: " << endl;
	estimate(code, betsy);
	cout << "Here is pam's estimate: " << endl;
	estimate(code, pam);

	return 0;
}

double betsy(int lines)
{
	return lines * 0.05;
}

double pam(int lines)
{
	return 0.03 * lines + 0.0004 * lines * lines;
}

void estimate(int lines, double (*pf)(int))
{
	cout << lines << " lines code will take " << (*pf)(lines) << " seconds." << endl;
}
