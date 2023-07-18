#ifndef CHECKINGACCOUNT_H_INCLUDED
#define CHECKINGACCOUNT_H_INCLUDED
class CheckingAccount: public BankAccount
{
public:
    CheckingAccount();
    CheckingAccount(int, double, double, double, double);
    void setInterestRate(double);
    double getInterestRate();
    void setMinBalance(double);
    double getMinBalance();
    void setServiceCharge(double);
    double getServiceCharge();
    double postInterest();
    bool balanceIsLessThanMinBal();
    void check(double);
    void withdraw(double);
    void print();
    ~CheckingAccount();
protected:
    double interestRate;
    double minBalance;
    double serviceCharge;
};
#endif // CHECKINGACCOUNT_H_INCLUDED
