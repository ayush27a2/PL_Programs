#include<iostream>
using namespace std;
class A
{
    protected:
    float u,a,t;
};
class B:public A
{
    float v,s;
    public:
    void in()
    {
        cout<<"Enter Initial Velocity (in m): ";
        cin>>u;
        cout<<"Enter Accelaration (in m/s^2): ";
        cin>>a;
        cout<<"Enter Time (in Seconds) : ";
        cin>>t;
    }
    void op()
    {
        v=u+a*t;
        s=u*t+0.5*a*t*t;
    }
    void show()
    {
        cout<<"Final Velocity = "<<v;
        cout<<"\nDistance travelled = "<<s;
    }
};
int main()
{
    B o;
    o.in();
    o.op();
    o.show();
    return 0;
}