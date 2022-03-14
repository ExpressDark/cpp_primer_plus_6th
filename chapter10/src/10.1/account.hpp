#ifndef _ACCOUNT_
#define _ACCOUNT_


#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
public:
    BankAccount(string userName, string account, long money = 0);

    void Show() const;
    void AddMoney(double money);
    void SubMoney(double money);



private:
    string m_userName;
    string m_account;
    double m_money;


};

#endif