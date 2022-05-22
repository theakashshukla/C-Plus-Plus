// write a program to input four integer value into an array and find largest integer value
#include <iostream>
using namespace std;
int main()
{
    int a[4],i,max;
    cout<<"Enter four integer values: ";
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=1;i<4;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"Largest integer value is: "<<max;
    return 0;
}