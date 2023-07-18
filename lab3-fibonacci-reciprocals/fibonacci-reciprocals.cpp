#include<iostream>
using namespace std;

bool isFib(int x);
void dispFibsInRange(int s = 1, int e = 10);
void dispFibsReciprocalInRange (int s = 1, int e = 10);
double FibsReciprocalSumInRange (int s =1, int e = 10);

int main()
{
    cout<<isFib(7)<<endl;
    dispFibsInRange();
    dispFibsReciprocalInRange();
    cout<<FibsReciprocalSumInRange();
}
/* determines if x is a Fibonacci sequence or not using iterative structure.
Return 1 if x is Fibonacci 0 if otherwise*/
bool isFib(int x)
{
    long long int firstNum = 1;
    long long int secondNum = 0;
    long long int sum = 0;
    for(int i=0; i<90; i++)
    {
        sum = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = sum;
        if(x == firstNum)
            return 1;
    }
    return 0;
}
/* Displays the list of Fibonacci numbers in range with default values 1 to
10 using isFib(int x) function.*/
void dispFibsInRange(int s, int e)
{
    for(int i=s; i<e; i++)
    {
        if(isFib(i))
            cout<<i<<", ";
    }
    cout<<endl;
}
/* Displays the list of Fibonacci numbers reciprocal 1/fib (in decimal format
i.e. real number) in range with default values 1 to 10 using isFib(int x)
function.*/
void dispFibsReciprocalInRange (int s, int e)
{
    for(int i=s; i<e; i++)
    {
        if(isFib(i))
            cout<<1/static_cast<double>(i)<<",";
    }
    cout<<endl;
}
/* Returns the sum of Fibonacci reciprocal 1/(fib) in range with default
values 0 to 10 using isFib(int x) function*/
double FibsReciprocalSumInRange (int s, int e)
{
    double sum = 0;
    for(int i=s; i<e; i++)
    {
        if(isFib(i))
            sum += (1/static_cast<double>(i));
    }
    return sum;
}
//Call all functions on function main according to your preferred parameter
