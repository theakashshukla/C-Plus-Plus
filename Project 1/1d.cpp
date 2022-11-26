//implementation of the function that calulates the cross sum of an integer
#include <iostream>
using namespace std;
int crossSum(int n)  //function declaration
{
    int sum = 0;  //declare sum variable
    while(n > 0) //while n is greater than 0
    {
        sum += n % 10;  //add the last digit of n to sum
        n /= 10;  //divide n by 10
    }

    return sum;
}
int main()
{
    int n;  //declare n variable
    cout<<"Enter an integer: ";   //enter an integer
    cin>>n;  //input 
    cout<<"Cross sum: "<<crossSum(n)<<endl;  //output cross sum
    return 0;
}