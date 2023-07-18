#ifndef BANKACCOUNT_H_INCLUDED
#define BANKACCOUNT_H_INCLUDED
class BankAccount
{
public:
    BankAccount();
    BankAccount(int, double);
    void setAccountNumber(int);
    void setBalance(double);
    int getAccountNumber();
    double getBalance();
    void withdraw(double);
    void deposit(double);
    void print();
    ~BankAccount();
protected:
    int accountNumber;
    double balance;
};
#endif // BANKACCOUNT_H_INCLUDED
