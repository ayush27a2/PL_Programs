#include<iostream>
using namespace std;
class radius
{
    protected:
    float r;
};
class area:public radius
{
    public:
    void in()
    {
        cout<<"Enter the Radius : ";
        cin>>r;
    }
    void area_c()
    {
        cout<<"Area of Circle = "<<3.14*r*r;
    }
    void circum_c()
    {
        cout<<"Circumference of Circle = "<<2*3.14*r;
    }
    void vol_s()
    {
        cout<<"Volume of Sphere = "<<1.33*3.14*r*r*r;
    }
};
int main()
{
    int ch;
    area a;
    while(1)
    {
    cout<<"\n";
    a.in();
    cout<<"1. Area of Circle\n";
    cout<<"2. Circumference of Circle\n";
    cout<<"3. Volume of Sphere\n";
    cout<<"\n\nEnter choice :- ";
    cin>>ch;
    switch(ch)
    {
        case 1:
        a.area_c();
        break;
        case 2:
        a.circum_c();
        break;
        case 3:
        a.vol_s();
        break;
        default:
        cout<<"Invalid Choice.";
        break;
    }
    }
}