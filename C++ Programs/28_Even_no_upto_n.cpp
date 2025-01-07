#include<iostream>
using namespace std;
class num
{
    protected:
    int n;
};
class even:public num
{
    int i;
    public:
    void in()
    {
        cout<<"Enter an Integer Value : ";
        cin>>n;
    }
    void show()
    {
        cout<<"Even Numbers upto "<<n<<"\n";
        for(i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                cout<<i<<"\t";
            }
        }
    }
};
int main()
{
    even o;
    o.in();
    o.show();
    return 0;
}