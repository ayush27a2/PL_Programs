#include<iostream>
using namespace std;
class declare
{
    protected:
    int n;
};
class div_check:public declare
{
    public:
    void in()
    {
        cout<<"Enter a Number : ";
        cin>>n;
    }
    void check()
    {
        if(n%5==0&&n%7==0)
        {
            cout<<n<<" is divisible by 5 & 7.";
        }
        else
        {
            cout<<n<<" is NOT divisible by 5 & 7.";
        }
    }
};
int main()
{
    div_check c;
    c.in();
    c.check();
    return 0;
}