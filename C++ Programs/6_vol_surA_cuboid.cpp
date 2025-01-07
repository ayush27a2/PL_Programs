#include<iostream>
using namespace std;
class vol_sar
{
    protected:
    float l,b,h;
};
class cuboid:public vol_sar
{
    public:
    void in()
    {
        cout<<"Enter Length(l),breadth(b) and height(h) : ";
        cin>>l>>b>>h;
    }
    void show()
    {
        cout<<"\nSurface Area of cuboid = "<<2*(l*b+b*h+h*l);
        cout<<"\nVolume of cuboid = "<<l*b*h;
    }
};
int main()
{
    cuboid a;
    a.in();
    a.show();
    return 0;
}