#include <iostream>
using namespace std;
class student

{
    private: 
            int rollno;
            char name[20], regd[15], marks[20];

    public:
          void input();
          void Display();
};

void student :: input()
{
    cout<<" Enter Roll No:"<<endl;
    cin>>rollno;
    cout<<" Enter Full Name:"<<endl;
    cin>>name;
    cout<<" Enter Registartion No:"<<endl;
    cin>>regd;
    cout<<" Enter Total Marks:"<<endl;
    cin>>marks;
}

void student :: Display()
{
    cout<<"Roll No: "<<rollno<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Registration: "<<regd<<endl;
    cout<<"Marks: "<<marks<<endl;
}

int main(){

    student s;
    s.input();
    s.Display();
    return 0;
}