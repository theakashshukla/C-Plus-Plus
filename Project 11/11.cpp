/*Create a Class Rational Which Represents a Numerical Value by Two Double Values Numerator & Denominator.
Include the following public member functions: constructor with No Arguments (Default). Constructor with Two Arguments.
Void Reduce() That Reduces the rational  number by Eliminating the highest common factor between  the numerator and denominator.
Overload + Operator to Add Two Rational Number. 
Overload >> Operator to Enable Input Through Cin. 
Overload << Operator to Enable Output Through Cout. 
Write a Main ( ) to Test All the Functions in the Class.
*/

#include<iostream>
using namespace std;
class Rational  //class declaration
    {
        int num,den;  //declare num and den variables
        public:
            Rational()  //function declaration
            {
                num=0;  //initialize num
                den=1;  //initialize den
            }
            Rational(double a,double b)  //function declaration
            {
                num=a;  //initialize num
                den=b;  //initialize den
            }
            void Reduce()  //function declaration
            {
                int gcd=1;  //declare gcd variable
                for(int i=1;i<=num;i++)  //for loop to find gcd
                {
                    if(num%i==0 && den%i==0)  //if num and den are divisible by i
                    {
                        gcd=i;  //gcd is i
                    }
                }
                num/=gcd;  //divide num by gcd
                den/=gcd;  //divide den by gcd
            }
            Rational operator +(Rational &r)  
            {
                Rational r1; //declare r1 object of Rational class
                r1.num=num*r.den+den*r.num;   //add num and den of r1 and r
                r1.den=den*r.den;   //multiply den of r1 and r
                r1.Reduce();  //call Reduce function
                return r1;  //return r1
            }
            friend istream& operator >>(istream &in,Rational &r)   //friend function declaration
            {
                cout<<"Enter Numerator: ";   //enter numerator
                in>>r.num;  //input numerator
                cout<<"Enter Denominator: ";   //enter denominator
                in>>r.den;  //input denominator
                r.Reduce();  //call Reduce function
                return in;  //return in
            }
            friend ostream& operator <<(ostream &out,Rational &r)  //friend function declaration
            {
                out<<r.num<<"/"<<r.den;  //output num and den
                return out;  //return out
            }
    };  //end of class
int main()
{
    Rational r1,r2,r3;  //declare r1,r2 and r3 objects of Rational class
    cin>>r1>>r2;   //input r1 and r2
    r3=r1+r2;   //add r1 and r2
    cout<<r3;    //output r3
    return 0;
}