#include<iostream>
#include<cmath>
using namespace std;
class QuadEq
{
    protected:
    float a,b,c,i;
};
class roots:public QuadEq
{
    float x1,x2;
    public:
    void in()
    {
        cout<<"Enter Coefficient of expression -> ax^2 + bx + c i.e (a,b,c) : ";
        cin>>a>>b>>c;
    }
    void cal()
    {
        x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
        x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
    }
    void show()
    {
        cout<<"All Possible Values of Quadratic Equation --> "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0 are :-\n";
        cout<<"x1 = "<<x1<<" and x2 ="<<x2; 
    }
};
int main()
{
    roots r;
    r.in();
    r.cal();
    r.show();
    return 0;
}