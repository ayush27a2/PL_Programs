#include<iostream>
using namespace std;
class series
{
    protected:
    int n;
};
class fibonacci:public series
{
    int a=1,b=1,c=2,i;
    public:
    void in()
    {
        cout<<"Enter value of n : ";
        cin>>n;
    }
    void show()
    {
        cout<<"First Fibonacci Series upto "<<n<<" numbers :-\n";
        cout<<a<<"  "<<b<<"  "<<c;
        for(i=4;i<=n;i++)
        {
        a=b;
        b=c;
        c=a+b;
        cout<<"  "<<c;
        }
    }
};
int main()
{
    fibonacci f;
    f.in();
    f.show();
    return 0;
}