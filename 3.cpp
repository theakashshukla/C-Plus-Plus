// Write a C++ Program to Implement Function Overloading in Order to Compute.
#include<iostream>
using namespace std;

int power(int m, int n)   //function overloading
{
    int i,p;           //loclal variable declaration
    p=1;            //initialization
    for(i=1;i<=n;i++)   //loop
    {
        p=p*m;    //assignment
    }
    return p;
}

int power(double m, int n)       //function overloading
{
    int i,p;               //local variable declaration
    p=1;
    for(i=1;i<=n;i++)        //loop
    {
        p=p*m;                //assignment
    }
    return p;
}

int main ()
{
    int m,n;   //local variable declaration
    double m1;  //local variable declaration
    cout<<"Enter the value of m: ";   //user input
    cin>>m;      
    cout<<"Enter the value of n: ";   //user input
    cin>>n;
    cout<<"The value of m^n is: "<<power(m,n)<<"\n";   //output
    cout<<"Enter the value of m: ";
    cin>>m1; 
    cout<<"Enter the value of n: ";    //user input
    cin>>n;
    cout<<"The value of m^n is: "<<power(m1,n);   //output
    return 0;
}

