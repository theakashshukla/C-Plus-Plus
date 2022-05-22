#include<iostream>
using namespace std;
class complex  //class declartion
{
    private:

    int real, img;  //private data members

    public:
        complex() //default constructor
        {
            real=0;  //initializing the variables
            img=0;   //initializing the variables
        }
        complex(int r,int i)  //parameterized  constructor
        {
            real=r;  //assigning values to real and img
            img=i;   //assigning values to real and img
        }
        friend complex add(complex,complex); //friend function declartion

        void display()  //function declartion
        {
            cout<<real<<"+"<<img<<"i"<<endl;  //displaying the complex number
        }
};
complex add(complex c1,complex c2)   //friend funnction declartion
{
    complex c3;   //object declartion
    c3.real=c1.real+c2.real;  //adding real part of c1 and c2
    c3.img=c1.img+c2.img;  //adding img part of c1 and c2
    return c3;   //returning the complex number
}
int main()
{
    complex c1(3,5),c2(3,4),c3;   //object declartion
    c3=add(c1,c2);   //calling the friend function
    c3.display();   //displaying the complex number
    return 0;
}
