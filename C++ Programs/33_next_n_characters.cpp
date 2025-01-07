#include<iostream>
using namespace std;
class charac
{
    protected:
    char ch;
};
class nxt:public charac
{
    int n,i;
    public:
    void in()
    {
        cout<<"Enter any Character : ";
        cin>>ch;
        cout<<"Enter an Integer : ";
        cin>>n;
    }
    void show()
    {
        cout<<"\nNext "<<n<<" characters are :-\n";
        for(i=1;i<=n;i++)
        {
            cout<<++ch<<"\t";
        }
    }
};
int main()
{
    nxt p;
    p.in();
    p.show();
    return 0;
}