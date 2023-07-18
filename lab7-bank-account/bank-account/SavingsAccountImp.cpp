#include "BankAccount.h"
#include "SavingsAccount.h"
#include <iostream>
using namespace std;
SavingsAccount::SavingsAccount()
{
    interestRate = 0.0;
}
SavingsAccount::SavingsAccount(int aN, double bal, double iRate)
:BankAccount(aN, bal)
{
    interestRate = iRate;
}
void SavingsAccount::setInterestRate(double iRate)
{
    interestRate =  iRate;
}
double SavingsAccount::postInterest()
{
    return balance * interestRate;
}
double SavingsAccount::getInterestRate()
{
    return interestRate;
}
void SavingsAccount::withdraw(double amt)
{
    if(amt < balance)
    {
        balance -= amt;
        cout<<"Succesfully Withdrawn"<<endl;
        cout<<"New Balance: PHP"<<balance<<endl;
    }
    else
    {
        cout<<"Not enough balance.";
    }
}
void SavingsAccount::print()
{
    cout<<endl<<"------Account Information-----"<<endl;
    cout<<"Account Number: "<<accountNumber<<endl;
    cout<<"Balance: "<<balance<<endl;
    cout<<"Interest Rate: "<<interestRate<<endl;
}
SavingsAccount::~SavingsAccount()
{

}
