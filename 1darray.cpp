// Write a C++ program to find the sum and average of one dimensional integer array

#include <iostream>
using namespace std;

int main()
{
    int Arr[20],n,i,sum=0;  //Arr is the array, n is the number of elements, i is the loop variable, sum is the sum of the array
    cout<<"Enter the elements ";  //Enter the elements
	cin>>n;  //n is the number of elements
    for(i=0;i<n;i++)  //loop to enter the elements
    {
        cin>>Arr[i];  //enter the elements
        sum=sum+Arr[i];  //sum is the sum of the array
    }
    cout<<"Sum of all elements is "<<sum<<endl;   //print the sum of the array 
    cout<<"Average of all elements is "<<sum/n<<endl;  //print the average of the array
    return 0;
}