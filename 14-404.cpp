// Create a 'String' Class Which Overloads ‘ = = ' Operator to Compare Two String objects.

#include <string.h>
#include<iostream>
using namespace std;
class String
{
    private:
        char *str;  //private data member
    public:
        String(char *str)  //parameterized constructor
        {
            this->str=new char[strlen(str)+1];  //allocating memory to str
            strcpy(this->str,str);  //copying str to this->str
        }
        friend bool operator==(String s1,String s2);  //friend function declartion
        void display()  //function declartion
        {
            cout<<str<<endl;  //displaying the string
        }
};
bool operator==(String s1,String s2)  //friend function declartion
{
    if(strcmp(s1.str,s2.str)==0)  //comparing the strings
    {
        return true;  //returning true
    }
    else
    {
        return false;  //returning false
    }
}
int main()
{
    String s1("hello"),s2("hello");  //object declartion
    if(s1==s2)  //calling the friend function
    {
        cout<<"s1 and s2 are equal"<<endl;  //displaying the string
    }
    else
    {
        cout<<"s1 and s2 are not equal"<<endl;  //displaying the string
    }
   
    return 0;
}
