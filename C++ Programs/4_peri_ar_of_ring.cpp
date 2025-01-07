#include<iostream>
using namespace std;
class ring
{
    protected:
    float a;
};
class ar_pr:public ring
{
    float b;
    public:
    void in()
    {
        cout<<"Enter Outer and Inner Radius of Ring : ";
        cin>>a>>b;
    }
    void show()
    {
        cout<<"\nPerimeter of Ring = "<<2*3.14*(a+b);
        cout<<"\nArea of Ring = "<<3.14*((a*a)-(b*b));
    }
};
int main()
{
ar_pr p;
p.in();
p.show();
return 0;
}