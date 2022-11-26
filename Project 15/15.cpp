//Create a Base Class Called 'Shape' Having
//Two Data Members of Type Double.
//Member function Get-Data( ) to Initialize Base Class Data Members.
//Pure Virtual Member Function Display-Area( ) to Compute and Display the Area of the Geometrical Object.
//Derive Two Specific Classes 'Triangle' and 'Rectangle' from the Base Class.
//Using These Three Classes Design a Program That Will Accept Dimension of a Triangle/Rectangle Interactively and Display the area.


#include <iostream>
using namespace std;
class Shape
{
    public:
    double l,b;   //data members
    void getdata()  //member function
    {
        cout<<"Enter the length and breadth of the shape: ";
        cin>>l>>b;   //input
    }
    virtual void displayarea()=0;   //pure virtual member function
};
class Triangle:public Shape   //derived class
{
    public:
    void displayarea()    //member function
    {
        cout<<"Area of the triangle is: "<<l*b/2;
    }
};
class Rectangle:public Shape     //derived class
{
    public:
    void displayarea()       //member function 
    {
        cout<<"Area of the rectangle is: "<<l*b;
    }
};
int main()
{
    Shape *s;  //pointer to base class object
    int ch;  //choice
    cout<<"Enter 1 for Triangle and 2 for Rectangle: ";  //input
    cin>>ch;  //input
    if(ch==1)  //if choice is 1
    {
        s=new Triangle();   //create object of derived class
        s->getdata();      //call member function
        s->displayarea();    //call member function
    }
    else if(ch==2)    //if choice is 2
    {
        s=new Rectangle();   //create object of derived class
        s->getdata();    //call member function
        s->displayarea();   //call member function
    }
    else
    {
        cout<<"Invalid choice";   //invalid choice
    }
    return 0;
}