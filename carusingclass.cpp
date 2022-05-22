#include <iostream>
using namespace std;
class car

{
    private:
        int price;
        char name[20];
        char color[20];
        char model[20];
        char company[20];
        char fuel[20]
        char bodytype[20];

    public:
            void input();
            void Display();
};
void car :: input()
{
    cout<<"Enter price"<<endl;
    cin>>price;
    cout<<"Enter name"<<endl;
    cin>>name;
    cout<<"Enter color"<<endl;
    cin>>color;
    cout<<"Enter model"<<endl;
    cin>>model;
    cout<<"Enter company"<<endl;
    cin>>company;
    cout<<"Enter fuel"<<endl;
    cin>>fuel;
    cout<<"Enter bodytype"<<endl;
    cin>>bodytype;
}
void car :: Display()
{
    cout<<"Price:"<<price<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Color:"<<color<<endl;
    cout<<"Model:"<<model<<endl;
    cout<<"Company:"<<company<<endl;
    cout<<"Fuel:"<<fuel<<endl;
    cout<<"Bodytype:"<<bodytype<<endl;
}
int main()
{
    car c;
    c.input();
    c.Display();
    return 0;
}

 