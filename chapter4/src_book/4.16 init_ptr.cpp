#include <iostream>

int main()
{
    using namespace std;
    int higgens = 5;
    int* pt = &higgens;

    cout << "value of higgens ="  << higgens
    << "; address of higgens =" << &higgens << endl;

    cout << "value of *pt ="  << *pt
    << "; address of pt =" << pt << endl;
    return 0;
}