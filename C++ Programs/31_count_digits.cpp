#include<iostream>
using namespace std;
class declare
{
    protected:
    int n;
};
class digit_count:public declare
{
    int temp,count=0,d;
    public:
    void in()
    {
        cout<<"Enter an Integer : ";
        cin>>n;
        temp=n;
    }
    void check()
    {
    while(n>0)
    {
       d=n%10;
       count++;
       n=n/10;
    }
    }
    void show()
    {
        cout<<"Number of Digits in "<<temp<<" = "<<count;
    }
};
int main()
{
    digit_count d;
    d.in();
    d.check();
    d.show();
    return 0;
}