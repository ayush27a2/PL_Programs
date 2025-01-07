#include<iostream>
using namespace std;
class prime
{
    protected:
    int n;
};
class check:public prime
{
    int count=0,i;
    public:
    void in()
    {
        cout<<"Enter an Integer : ";
        cin>>n;
    }
    void prime_check()
    {
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
    }
    void show()
    {
        if(count==2)
        {
            cout<<"Entered Integer is Prime.";
        }
        else
        {
            cout<<"Entered Integer is NOT Prime.";
        }
    }
};
int main()
{
    check c;
    c.in();
    c.prime_check();
    c.show();
    return 0;
}