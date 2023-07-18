#include <iostream>
#include "BankAccount.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
using namespace std;

int main()
{
    BankAccount rhuel(12839203, 90000);
    rhuel.withdraw(50000);
    rhuel.deposit(20000);
    rhuel.print();
    cout<<endl<<endl;
    //Checking Account Test
    CheckingAccount john(12839203, 90000, 0.10, 5000, 100);
    john.deposit(10000);
    john.withdraw(100000);
    john.withdraw(30000);
    john.print();
    //Savings Account Test
    SavingsAccount jar(12839203, 90000, 0.15);
    jar.deposit(5000);
    jar.withdraw(90000);
    jar.print();
    return 0;
}
