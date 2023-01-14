// Write a C++ Program to Implement Power(M, N) Where M and N are Integers
#include<iostream>
using namespace std;

int power(int m, int n)
{
    int i,p;
    p=1;
    for(i=1;i<=n;i++)     
    {
        p=p*m;
    }
    return p;

}

int main()
{
    int m,n;
    cout<<"Enter the value of m: ";
    cin>>m;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"The value of m^n is: "<<power(m,n);
    return 0;
}