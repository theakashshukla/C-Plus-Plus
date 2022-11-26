//some student attrirbutes using class
#include <iostream>
using namespace std;
class student

    
    {
        private:   //private data members
            int rollno;
            char name[20], branch[10];
            float marks;

        public:    //public member functions
            void input();
            void Display();
            
    };
            void student :: input()
            {
                cout<<"Enter rollno"<<endl;
                cin>>rollno;
                cout<<"Enter name"<<endl;
                cin>>name;
                cout<<"Enter marks"<<endl;
                cin>>marks;
                cout<<"branch"<<endl;
                cin>>branch;
            }
            void student :: Display()
            {
                cout<<"Rollno:"<<rollno<<endl;
                cout<<"Name:"<<name<<endl;
                cout<<"Marks:"<<marks<<endl;
                cout<<"branch:"<<branch<<endl;
            }
    };
int main()
{
    student s;
    s.input();
    s.Display();
    return 0;
}
