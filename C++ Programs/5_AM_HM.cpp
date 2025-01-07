#include<iostream>
using namespace std;
class declare
{
    protected:
    float a,b;
};
class AM_HM:public declare
{
    public:
    void in()
    {
        cout<<"Enter Two Numbers : ";
        cin>>a>>b;
    }
    void show()
    {
        cout<<"\nArithmetic Mean of "<<a<<" and "<<b<<" = "<<(a+b)/2;
        cout<<"\nHarmonic Mean of "<<a<<" and "<<b<<" = "<<(a*b)/(a+b);
    }
};
int main()
{
    AM_HM a;
    a.in();
    a.show();
    return 0;
}