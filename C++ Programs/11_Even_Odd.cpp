#include<iostream>
using namespace std;
class declare
{
    protected:
    int a;
};
class ev_odd:public declare
{
    public:
    void in()
    {
        cout<<"Enter an Integer : ";
        cin>>a;
    }
    void show()
    {
        if(a%2==0)
        {
            cout<<a<<" is an Even Integer.";
        }
        else
        {
            cout<<a<<" is an Odd Integer.";
        }
    }
};
int main()
{
    ev_odd e;
    e.in();
    e.show();
    return 0;
}