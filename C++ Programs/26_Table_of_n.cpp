#include<iostream>
using namespace std;
class declare
{
    protected:
    int n;
};
class table:public declare
{
    int i;
    public:
    void in()
    {
        cout<<"Enter a Number : ";
        cin>>n;
    }
    void show()
    {
        for(i=1;i<=10;i++)
        {
            cout<<n<<" x "<<i<<" = "<<n*i<<"\n";
        }
    }
};
int main()
{
    table t;
    t.in();
    t.show();
    return 0;
}