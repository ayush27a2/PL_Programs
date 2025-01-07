#include<iostream>
using namespace std;
class declare
{
    protected:
    float s,l,b,bs,h;
};
class area:public declare
{
    public:
    void area_sq()
    {
        cout<<"Enter Side of Square : ";
        cin>>s;
        cout<<"Area of Square = "<<s*s;
    }
    void area_rect()
    {
        cout<<"Enter Length and Breadth of Rectangle : ";
        cin>>l>>b;
        cout<<"Area of Rectangle = "<<l*b;
    }
    void area_tri()
    {
        cout<<"Enter Base and Hieght of Triangle : ";
        cin>>bs>>h;
        cout<<"Area of Triangle = "<<0.5*bs*h;
    }
};
int main()
{
    int ch;
    cout<<"1. Area of Square\n";
    cout<<"2. Area of Rectangle\n";
    cout<<"3. Area of Triangle\n";
    area a;
    while(1)
    {
    cout<<"\n\nEnter choice :- ";
    cin>>ch;
    switch(ch)
    {
        case 1:
        a.area_sq();
        break;
        case 2:
        a.area_rect();
        break;
        case 3:
        a.area_tri();
        break;
        default:
        cout<<"Invalid Choice.";
        break;
    }
    }
}