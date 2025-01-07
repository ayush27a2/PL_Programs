#include<iostream>
using namespace std;
class temp1
{
    protected:
    float f;
};
class temp2:public temp1
{
    float c,k;
    public:
    void in()
    {
        cout<<"Enter Temperature in Fahrenheit : ";
        cin>>f;
    }
    void op()
    {
        c=(5*f-160)/9;
        k=c+273.15;
    }
    void show()
    {
        cout<<"Temperature in Celsius = "<<c;
        cout<<"\nTemperature in Kelvin = "<<k;
    }
};
int main()
{
    temp2 o;
    o.in();
    o.op();
    o.show();
    return 0;
}