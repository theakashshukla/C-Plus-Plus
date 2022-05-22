// Write a Program That Uses a Structure Called Point to Model a Point. Define Three Points
// and Have the User Input Values to Two of Them. Then Set the Third Point Equal to the
// Sum of the Other Two, and Display the Value of the New Point. Interaction with the 
// Program Might Look Like This:
// Enter Coordinates for P1: 3 4 
// Enter Coordinates for P2: 5 7 
// Coordinates of P1 + P2 are: 8, 11

#include<iostream>    
using namespace std;
int main()
{
    struct point         //structure declaration
    {
        int x,y;        //structure member declaration
    }; 
    point p1,p2,p3;     //structure object declaration
    cout<<"Enter Coordinates for P1: ";     //user input
    cin>>p1.x>>p1.y;     
    cout<<"Enter Coordinates for P2: ";     //user input
    cin>>p2.x>>p2.y;     
    p3.x=p1.x+p2.x;      //structure member assignment
    p3.y=p1.y+p2.y;      //structure member assignment
    cout<<"Coordinates of P1 + P2 are:"<<p3.x<<" "<<p3.y;       //output
    return 0;
}
