// Write a C++ Program to Implement Power(M, N) Where M is Double and N is Int
#include<iostream>
using namespace std;

int power(double m, int n)
{
    int i,p;
    p=1;
    for(i=1;i<=n;i++)
    {
        p=p*m;
    }
    return p;
}

int main ()
{
    double m;
    int n;
    cout<<"Enter the value of m: ";
    cin>>m;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"The value of m^n is: "<<power(m,n);
    return 0;
}