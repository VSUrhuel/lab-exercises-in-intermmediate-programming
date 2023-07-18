#include "BankAccount.h"
#include<iostream>
using namespace std;
BankAccount::BankAccount()
{
    accountNumber = 0;
    balance = 0;
}
BankAccount::BankAccount(int aN, double bal)
{
    accountNumber = aN;
    balance = bal;
}
void BankAccount::setAccountNumber(int aN)
{
    accountNumber = aN;
}
void BankAccount::setBalance(double bal)
{
    balance = bal;
}
int BankAccount::getAccountNumber()
{
    return accountNumber;
}
double BankAccount::getBalance()
{
    return balance;
}
void BankAccount::withdraw(double amt)
{
    if(amt < balance)
    {
        balance -= amt;
        cout<<"Succesfully Withdrawn"<<endl;
        cout<<"New Balance: PHP"<<balance<<endl;
    }
    else
    {
        cout<<"Cannot Withdraw";
    }
}
void BankAccount::deposit(double amt)
{
    balance += amt;
    cout<<"Deposited:PHP"<<amt<<endl;
}
void BankAccount::print()
{
    cout<<endl<<"------Account Information-----"<<endl;
    cout<<"Account Number: "<<accountNumber<<endl;
    cout<<"Balance: PHP"<<balance<<endl;
}
BankAccount::~BankAccount()
{

}
