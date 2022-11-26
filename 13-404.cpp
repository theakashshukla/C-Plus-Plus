// Create a 'Matrix' Class of Size M X N. Overload the ‘+’ Operator to Add Two matrix Objects. 
// Write a Main Function to Implement It

#include <iostream>
using namespace std;
class Matrix
{
    private:
           int M, X[][], N;
    public:
              matrix(){}
              void set();
              void display();
             matrix operator+(matrix);
};

void Matrix::set()
{
    cout<<"\ Enter values into the matrix : "<<endl;
    for (int i=0;i<M;i++)
    {
        for (int j=0;j<N;j++)
        {
            cin>>a[i][j];
        }
    }
}

void Matrix::display()
{
    cout<<"\ The matrix is : "<<endl;
    for (int i=0;i<M;i++)
    {
        for (int j=0;j<N;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}



int main()
{
    int m,n;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> m >> n;
    Matrix mat1(m,n);
    Matrix mat2(m,n);
    mat1.set();
    mat2.set();
    mat1.display();
    mat2.display();
    mat1.operator+(mat2);
    return 0;
}





