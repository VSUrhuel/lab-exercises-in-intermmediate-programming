#include<iostream>
#include<cmath>
using namespace std;

void initArrayRandInt (int x[], int s);
bool isPrime(int x);
bool isEven(int x);
void printGoldbachsPairInArray (int x[], int s);

int main()
{
    int s = 25;
    int x[s] = {0};
    initArrayRandInt(x, s);
    printGoldbachsPairInArray (x, s);
}
/* Initializes array x of size s with random positive integers*/
void initArrayRandInt (int x[], int s)
{
    for(int i=0; i<s; i++)
    {
        x[i] = (rand() % (10 - 1 + 1)) + 1;
    }
}
/* Determines if integer x is an prime number, return 1 if prime 0 if
otherwise*/
bool isPrime(int x)
{
    int f = 2, ctr = 0;
    while(f<=x)
    {
        if(x % f == 0)
            ctr++;
        f++;
    }
    if(ctr != 1)
        return 0;
    return 1;
}
/* Determines if integer x is an even greater than 4, return 1 if even 0 if
otherwise.*/
bool isEven(int x)
{
    if(x%2 == 0 && x > 4)
        return 1;
    return 0;
}
/* Prints the Goldbach’s pair (1 pair only) of element(s) in array (if there
are any). Using the functions isPrime and isEven*/
void printGoldbachsPairInArray (int x[], int s)
{
    int temp = s;
    for(int i=0; i<temp; i++)
    {
        if(isPrime(x[i]) && isEven((x[i]*2)))
        {
            cout<<x[i]*2<<" = "<< x[i] <<" + "<<x[i]<<endl;
            break;
        }
        if(isPrime(x[i])&& isPrime(x[s]) && isEven(x[i]+x[s]))
        {
            cout<<x[i]+x[s]<<" = "<<x[i]<<" + "<<x[s]<<endl;
            break;
        }
        int f = x[i++];
        if(isPrime(x[i])&& isPrime(f) && isEven(x[i]+f))
        {
            cout<<x[i]+f<<" = "<<x[i]<<" + "<<f<<endl;
            break;
        }
        s--;
    }
}
