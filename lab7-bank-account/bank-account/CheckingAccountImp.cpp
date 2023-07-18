#include"BankAccount.h"
#include"CheckingAccount.h"
#include<iostream>
using namespace std;
CheckingAccount::CheckingAccount()
{
    interestRate = 0.0;
    serviceCharge = 0.0;
    minBalance = 0.0;
}
CheckingAccount::CheckingAccount(int aN, double bal, double iRate, double miB, double servC)
:BankAccount(aN, bal)
{
    interestRate = iRate;
    minBalance = miB;
    serviceCharge = servC;
}
void CheckingAccount::setInterestRate(double iRate)
{
    interestRate = iRate;
}
void CheckingAccount::setMinBalance(double miB)
{
    minBalance = miB;
}
void CheckingAccount::setServiceCharge(double servC)
{
    serviceCharge = servC;
}
double CheckingAccount::getInterestRate()
{
    return interestRate;
}
double CheckingAccount::getMinBalance()
{
    return minBalance;
}
double CheckingAccount::getServiceCharge()
{
    return serviceCharge;
}
double CheckingAccount::postInterest()
{
    return balance * interestRate;
}
bool CheckingAccount::balanceIsLessThanMinBal()
{
    return balance < minBalance;
}
void CheckingAccount::check(double amt)
{
    if(amt < balance)
    {
        cout<<"Acount Number: "<<accountNumber<<'\t'<<"Date: June 20, 2023"<<endl;
        cout<<"Receivable Account: Elena Lopez"<<'\t'<<"Account Number: 19203903"<<endl;
        cout<<"Amount to Receive: PHP"<<amt<<endl;
    }
}
void CheckingAccount::withdraw(double amt)
{
    if((amt+minBalance)<balance)
    {
        balance -= amt;
        cout<<"Succesfully Withdrawn"<<endl;
        cout<<"New Balance: PHP"<<balance<<endl;
    }
    else
    {
        cout<<"Not Enough Balance to Withdraw a PHP "<<amt<<endl;
    }
}
void CheckingAccount::print()
{
    cout<<endl<<"------Account Information-----"<<endl;
    cout<<"Account Number: "<<accountNumber<<endl;
    cout<<"Balance: "<<balance<<endl;
    cout<<"Interest Rate: "<<interestRate<<endl;
    cout<<"Minimum Balance: "<<minBalance<<endl;
    cout<<"Service Charge: "<<serviceCharge<<endl;
}
CheckingAccount::~CheckingAccount()
{

}
