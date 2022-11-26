//Find Max & Min of Given 3 Numbers

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,max,min; //Declare variables
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c; //input 3 numbers
    if(a>b) //
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }
    if(c>max)
    {
        max=c;
    }
    else if(c<min)
    {
        min=c;
    }
    cout<<"Max: "<<max<<endl;
    cout<<"Min: "<<min<<endl;
    return 0;
}