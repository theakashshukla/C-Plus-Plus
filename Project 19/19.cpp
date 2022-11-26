// Write a program in C++ to Create a Function Template

#include <iostream>
using namespace std;
template<class T>
void print(T a)
{
    cout<<a<<endl;
}
int main()
{
    print<int>(10);
    print<float>(10.5);
    print<char>('a');
    print<string>("Hello");
    return 0;
}
