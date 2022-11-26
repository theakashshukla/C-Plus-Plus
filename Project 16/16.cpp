// Consider the Following Class Definition 
// Class Father { 
// Protected :Int Age; 
// Public; 
// Father (Int X) {Age = X;} 
// Virtual Void Iam( ) 
// { Cout<< I Am the Father, My Age is <<Age<<Endl; } 
//     }; 
// Derive the Two Classes Son and Daughter from the Above Class and for Each Define Iam( ) to Write Our Similar But Appropriate Messages. You Should Also 
// Define Suitable Constructors for These Classes.
// Now, Write a Main ( ) That Creates Objects of the Three Classes and Then Calls I am () for Them. Declare Pointer to Father. Successively, Assign Addresses of Objects of 
// the Two Derived Classes to This Pointer and in Each Case, Call I am( ) Through the Pointer to Demonstrate Polymorphism in Action.

#include <iostream>
using namespace std;
class Father
{
protected:
    int Age;    //Protected
public: 
    Father(int X) {Age = X;}   //Constructor
    virtual void Iam()   //Virtual Function
    { cout<< "I Am the Father, My Age is "<<Age<<endl; }   //Virtual Function
};
class Son : public Father
{
public:
    Son(int X) : Father(X) {}
    void Iam()
    {
        cout<< "I Am the Son, My Age is "<<Age<<endl;
    }
};
class Daughter : public Father
{
public:
    Daughter(int X) : Father(X) {}
    void Iam()
    {
        cout<< "I Am the Daughter, My Age is "<<Age<<endl;
    }
};
int main()
{
    Father *f;
    Son s(10);
    Daughter d(20);
    f = &s;
    f->Iam();
    f = &d;
    f->Iam();
    return 0;

}