#ifndef SAVINGSACCOUNT_H_INCLUDED
#define SAVINGSACCOUNT_H_INCLUDED
class SavingsAccount: public BankAccount
{
public:
    SavingsAccount();
    SavingsAccount(int, double, double);
    void setInterestRate(double);
    double getInterestRate();
    double postInterest();
    void withdraw(double amt);
    void print();
    ~SavingsAccount();
protected:
    double interestRate;
};
#endif // SAVINGSACCOUNT_H_INCLUDED
