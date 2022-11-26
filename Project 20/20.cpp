// Write a program in C++ to Create a Class Template

#include<iostream>
using namespace std;
class Template
{
    public:
        template<class T>
        void print(T a)
        {
            cout<<a<<endl;
        }
};
int main()
{
    Template t;
    t.print<int>(10);
    t.print<float>(10.5);
    t.print<char>('a');
    t.print<string>("Hello");
    return 0;
}