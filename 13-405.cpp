// Create a 'Matrix' Class of Size M X N. Overload the ‘+’ Operator to Add Two matrix Objects. 
// Write a Main Function to Implement It

#include <iostream>
using namespace std;
class matrix

    {
        private:
        int m,n;
        int a[10][10];

        public:
            matrix(int m,int n)
            {
                this->m=m;
                this->n=n;
            }
            void getdata()
            {
                for(int i=0;i<m;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<"Enter the element at "<<i<<" "<<j<<" : ";
                        cin>>a[i][j];   
                    }
                }
            }
    };

    matrix operator +(matrix m1,matrix m2)
    {
        matrix m3(m1.m,m1.n);
        for(int i=0;i<m1.m;i++)
        {
            for(int j=0;j<m1.n;j++)
            {
                m3.a[i][j]=m1.a[i][j]+m2.a[i][j];
            }
        }
        return m3;
    }
    int main()
    {
        matrix m1(2,3),m2(2,3),m3;
        m1.getdata();
        m2.getdata();
        m3=m1+m2;
        cout<<"\n\n";
        for(int i=0;i<m3.m;i++)
        {
            for(int j=0;j<m3.n;j++)
            {
                cout<<m3.a[i][j]<<" ";
            }
            cout<<"\n";
        }
    }



