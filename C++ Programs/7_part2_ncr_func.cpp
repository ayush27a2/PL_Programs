#include<iostream>
using namespace std;
class decl
{
    protected:
    int n,r,i;
};
class nCr : public decl
{
    int nCr,f1=1,f2=1,f3=1;
    public:
    void in()
    {
        cout<<"Enter value of n and r (respectively) : ";
        cin>>n>>r;
    }
    void cal()
    {
        for(i=1;i<=n;i++)
        {
            f1=f1*i;
        }
        for(i=1;i<=(n-r);i++)
        {
            f2=f2*i;
        }
        for(i=1;i<=r;i++)
        {
            f3=f3*i;
        }
        nCr = f1/(f2*f3);
    }
    void show()
    {
        cout<<"Value of "<<n<<"C"<<r<<" = "<<nCr;
    }
};
int main()
{
    nCr p;
    p.in();
    p.cal();
    p.show();
    return 0;
}