// Create a Class Called 'Employee' That Has
// Empcode and Empname as Data Members
// Member Function Getdata( ) to Input Data
// Member Function Display( ) to Output Data
// Write a Main Function to Create Emp  an Array of Employee Objects. Accept and Display the Details of At Least 6 Employees.

#include<iostream>
using namespace std;
class Employee
{
    int empcode;   //declare empcode variable
    char empname[20];   //declare empname variable
public:
    void getdata()    //function declaration
    {
        cout<<"Enter Empcode: ";   //enter empcode
        cin>>empcode;  //input empcode
        cout<<"Enter Empname: ";   //enter empname
        cin>>empname;  //input empname
    }
    void display()
    {
        cout<<"Empcode: "<<empcode<<endl;   //output empcode
        cout<<"Empname: "<<empname<<endl;   //output empname
    }
}; //end of class
int main()
{
    Employee e[6];  //declare e array of Employee objects
    for(int i=0;i<6;i++)   //for loop to input data
    {
        e[i].getdata();  //call getdata function
        e[i].display();   //call display function
    }
    return 0;
}
