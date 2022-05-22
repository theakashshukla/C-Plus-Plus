// Create the Equivalent of a Four Function Calculator. Program Should Request the User to Enter a Number, an Operator and Another Number.
// It Should Then Carry Out the 
// Specified Arithmetical Operation: Adding, Subtracting, Multiplying, Or Dividing the Two 
// Numbers. (It Should use a Switch Statement to Select the Operation). Finally It Should 
// Display the Result. When It Finishes the Calculation, the Program Should Ask If the User
// Wants to Do Another Calculation. Response Can Be Y Or N. Some Sample Interaction with
// the Program Might Look Like This.
// Enter First Number, Operator,  Second Number: 10/ 3
// Answer = 3.333333 
// Do Another (Y/ N)? Y 
// Enter First Number, Operator, Second Number 12 + 100 
// Answer = 112 
// Do Another (Y/ N) ? N 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1, num2, result;  //declare variables
    char op;    //declare char variable
    bool flag = true;    //set flag to true
    while (flag)    //while flag is true
    {
        cout << "Enter First Number, Operator, Second Number: ";  //prompt user for input
        cin >> num1 >> op >> num2;     //get input
        switch (op)     //switch statement
        {
        case '+':    //if op is +
            result = num1 + num2;
            break;
        case '-':  //if op is -
            result = num1 - num2;
            break;
        case '*':   // * is the same as *         
            result = num1 * num2;
            break;
        case '/':     // / is the same as /
            result = num1 / num2;
            break;
        default:      //if op is not + - * /
            cout << "Invalid Operator" << endl;     //display invalid operator
            break;
        }
        
        cout << "Answer = " << result << endl;     //display result
        cout << "Do Another (Y/ N)? ";            //prompt user for input
        string ans;                            //declare string variable
        cin >> ans;               //get input
        if (ans == "N" || ans == "n")        //if ans is N or n
        {
            flag = false;    //set flag to false
        }
    }
    return 0;
}
