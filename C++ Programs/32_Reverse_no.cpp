#include<iostream>
using namespace std;
class num
{
    protected:
    int n;
};
class rev:public num
{
    int rev=0,d;
    public:
    void in()
    {
        cout<<"Enter an Integer : ";
        cin>>n;
    }
    void reverse()
    {
        while(n>0)
        {
            d=n%10;
            rev=rev*10+d;
            n=n/10;
        }
    }
    void show()
    {
        cout<<"Integer after Reversing the digits :- \n"<<rev;
    }
};
int main()
{
    rev r;
    r.in();
    r.reverse();
    r.show();
    return 0;
}