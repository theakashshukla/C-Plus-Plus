//Create a 'Distance' Class with :
//Feet and Inches as Data Members
//Member Function to Output Distance
//Member Function to Add Two Distance Objects
//Write a Main Function to Create Objects of Distance Class. Input Two Distances 
//and Output the Sum.

#include <iostream>
using namespace std;
class Distance
{
    int feet;
    int inches;
public:
    void getdata();
    void putdata();
    Distance operator+(Distance);
};
void Distance::getdata()
{
    cout<<"Enter Feet: ";
    cin>>feet;
    cout<<"Enter Inches: ";
    cin>>inches;
}
void Distance::putdata()
{
    cout<<feet<<"\' "<<inches<<"\""<<endl;
}
Distance Distance::operator+(Distance d)
{
    Distance temp;
    temp.feet=feet+d.feet;
    temp.inches=inches+d.inches;
    if(temp.inches>=12)
    {
        temp.feet+=temp.inches/12;
        temp.inches%=12;
    }
    
    return temp;
}
int main()
{
    Distance d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3=d1+d2;
    d1.putdata();
    d2.putdata();
    d3.putdata();
    return 0;
}
