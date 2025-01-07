#include<iostream>
using namespace std;
class declare
{
    protected:
    int a,b,c;
};
class check:public declare
{
    public:
    void in()
    {
        cout<<"Enter Three Numbers : ";
        cin>>a>>b>>c;
    }
    void show()
    {
        if(a>b&&a<c&&b<c)
        {
            cout<<a<<" is between "<<b<<" and "<<c;
        }
        else if(a<b&&a>c&&b>c)
        {
            cout<<a<<" is between "<<b<<" and "<<c;
        }
        else
        {
            cout<<a<<" is NOT between "<<b<<" and "<<c;
        }
    }
};
int main()
{
    check c;
    c.in();
    c.show();
    return 0;
}