//Write a C++ Program to Sort an Array of Integer in Ascending Order Using a Function Called Exchange( ) Which Accepts Two Integer Arguments by Reference.
#include<iostream>
using namespace std;
void exchange(int &a,int &b) //function to exchange two numbers
{
    int temp; //initialize temp
    temp=a;  //assign a to temp
    a=b;     //assign b to a
    b=temp;  //assign temp to b
}

int main()
{
    int a,b;
    cout<<"Enter the value of a and b:"; 
    cin>>a>>b;
    cout<<"Before exchange:a="<<a<<" b="<<b<<endl;  //print before exchange
    exchange(a,b);
    cout<<"After exchange:a="<<a<<" b="<<b<<endl;   //print after exchange  
    return 0;
}
