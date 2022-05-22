// Write a menu driven C++ program to do following operation on two dimensional array A of size m x n. You should use user-defined functions which accept 2-D array A, and its size m and n as arguments. The options are:

// To input elements into matrix of size m x n
// To display elements of matrix of size m x n
// Sum of all elements of matrix of size m x n
// To display row-wise sum of matrix of size m x n
// To display column-wise sum of matrix of size m x n
// To create transpose of matrix B of size n x m

#include <iostream>
using namespace std;

int main ()
{
    int m,n;
    cout<<"Enter the size of the matrix: ";
    cin>>m>>n;
    int A[m][n];
    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    cout<<"\nThe matrix is: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=A[i][j];
        }
    }
    cout<<"\nThe sum of all elements of the matrix is: "<<sum<<endl;
    int row_sum[m];
    for(int i=0;i<m;i++){
        row_sum[i]=0;
        for(int j=0;j<n;j++){
            row_sum[i]+=A[i][j];
        }
    }
    cout<<"\nThe row-wise sum of the matrix is: "<<endl;
    for(int i=0;i<m;i++){
        cout<<row_sum[i]<<" ";
    }
    cout<<endl;
    int col_sum[n];
    for(int i=0;i<n;i++){
        col_sum[i]=0;
        for(int j=0;j<m;j++){
            col_sum[i]+=A[j][i];
        }
    }
    cout<<"\nThe column-wise sum of the matrix is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<col_sum[i]<<" ";
    }
    cout<<endl;
    int B[n][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            B[j][i]=A[i][j];
        }
    }
    cout<<"\nThe transpose of the matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}