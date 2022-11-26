// Create a 'Matrix' Class of Size M X N. Overload the ‘+’ Operator to Add Two matrix Objects. 
// Write a Main Function to Implement It

#include<iostream>
using namespace std;
class matrix 
{
        int m, n, x[30][30]; // m is the number of rows and n is the number of columns
public:
        matrix(int a, int b)       //constructor
       { 
                m=a;  // m is the number of rows
                n=b;  // n is the number of columns
       }
        matrix(){}  //default constructor
        void get();  //function to get the values of the matrix
        void put();   //function to display the matrix
        matrix operator +(matrix);   //function to add two matrices
}; 

void matrix:: get()   //function to get the values of the matrix
{  
        cout<<"\nEnter values into the matrix: ";   
               for(int i=0; i<m; i++)  //loop to get the values of the matrix
                       for(int j=0; j<n;j++)  
                       cin>>x[i][j];  //input the values of the matrix

}

void matrix:: put()   //function to display the matrix
{  
        cout<<"\nThe sum of the matrix is: \n";  
               for(int i=0; i<m; i++)   //loop to  display the matrix
               {
                       for(int j=0; j<n;j++)   //loop to display the matrix
                       cout<<x[i][j]<<"\t"; //display the values of the matrix
                       cout<<endl;
               }
} 

matrix matrix::operator +(matrix b) //
{    
        matrix c(m,n);   //object of class matrix
        for(int i=0; i<m; i++)   //loop
                for(int j=0; j<n; j++) //loop
                c.x[i][j]= x[i][j] + b.x[i][j];  //addition of the matrices
        return c;
}

int main()
{    
        int m,n;
        cout<<"\nEnter the size of the array: ";  //input the size of the array
        cin>>m>>n;   //input the size of the array
        matrix a(m,n) , b(m,n) , c;  //object of class matrix
        a.get();  //function to get the values of the matrix
        b.get();  //function to get the values of the matrix
        c= a+b;    //function to add two matrices
        c.put(); //function to display the matrix
        return 0;
}