#include<iostream>
using namespace std;
class declare
{
    protected:
    int x,n;
};
class exp:public declare
{
    int i,res=1;
    public:
    void in()
    {
        cout<<"Enter Two Integers : ";
        cin>>x>>n;
    }
    void cal()
    {
        for(i=1;i<=n;i++)
        {
            res=res*x;
        }
    }
    void show()
    {
        cout<<"Value of x^n i.e. "<<x<<"^"<<n<<" = "<<res;
    }
};
int main()
{
    exp e;
    e.in();
    e.cal();
    e.show();
    return 0;
}