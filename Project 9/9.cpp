/*Create a Class Called 'Time' That Has
Three Integer Data Members for Hours
Constructor to Initialize the Object to Zero
Constructor to Initialize the Object to Some Constant Value
Member Function to Add Two Time Objects
Member Function to Display Time in Hh:Mm:Ss Format
Write a Main Function to Create Two Time Objects, Add Them and Display the Result in Hh:Mm:Ss Format */

#include<iostream>
using namespace std;
class Time
{
    int hours,minutes,seconds;
    public:
    Time()
    {
        hours=0;
        minutes=0;
        seconds=0;
    }
    Time(int h,int m,int s)
    {
        hours=h;
        minutes=m;
        seconds=s;
    }
    void add(Time t1,Time t2)
    {
        seconds=t1.seconds+t2.seconds;
        minutes=t1.minutes+t2.minutes;
        hours=t1.hours+t2.hours;
        if(seconds>=60)
        {
            minutes+=seconds/60;
            seconds=seconds%60;
        }
        if(minutes>=60)
        {
            hours+=minutes/60;
            minutes=minutes%60;
        }
    }
    void display()
    {
        cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }
};
int main()
{
    Time t1(1,2,3),t2(4,5,6);
    t1.add(t1,t2);
    t1.display();
    return 0;
}
