//Determine number of characters in a string
#include <iostream> //include iostream library
#include <string> //include string library
using namespace std;
int main()
{
    string str; //declare string variable
    cout<<"Enter a string: ";
    getline(cin,str); //input string
    cout<<"Number of characters: "<<str.length()<<endl; //output number of characters
    return 0;
}
