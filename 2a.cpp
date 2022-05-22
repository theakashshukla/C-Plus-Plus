/*Raising a Number N to a Power P is the Same as Multiplying N by It self P Times. Write a Function Called Power ( ) That Takes a D
ouble Value for N and an INT Value for P
Returns the Result as Double Value. use a Default Argument of 2 for P Argument is Omitted,
Values from the User to Test This Function*/

#include<iostream>
using namespace std;
double power(double n,int p=2)  //default value of p is 2
{
    double result=1; //initialize result
    for(int i=1;i<=p;i++) //loop to multiply n by itself p times
    {
        result=result*n;
    }
    return result;
}

int main()
{
    double n;
    int p;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>p;
    cout<<"The result is: "<<power(n,p);
    return 0;
}


