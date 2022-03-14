#include "account.hpp"

BankAccount::BankAccount(string userName, string account, long money)
{
    m_userName = userName;
    m_account = account;
    m_money = money;
}

void BankAccount::Show() const
{
    cout << "The Account information: " << endl;
	cout << "userName: " << m_userName << endl;
	cout << "account: " << m_account << endl;
	cout << "money: " << m_money << endl;
}


void BankAccount::AddMoney(double money)
{
    m_money += money;
}


void BankAccount::SubMoney(double money)
{
    m_money -= money;
}


