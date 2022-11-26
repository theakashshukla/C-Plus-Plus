#include<iostream>  
#include<string.h>  //for strcmp()
using namespace std;
class String
{
        char str[20];  //private data member
        public:   //public member functions

          void getstr()  //function to get string

        {
             gets(str);  //gets() function to get string

        }

         int operator ==(String s)  //overloading == operator
        {
               if(!strcmp(str,s.str))   //comparing the strings
                return 1;   //returning true
                else
                return 0;  //returning false
        }
};

int main()
{
        String s1,s2;  //object declartion

        cout<<"First String :";
        s1.getstr();   //getting string
        cout<<"\nSecond String :"; 
        s2.getstr();
        if(s1==s2)  
        {
            cout<<"\nStrings are Equal\n";    //displaying the Equal string
        }
        else
        {
            cout<<"\nStrings are Not Equal\n";   ////displaying the Not Equal string
        }
        
        return 0;
}