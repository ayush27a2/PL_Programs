#include<iostream>
using namespace std;
class num
{
    protected:
    int n1,n2;
};
class table:public num
{
    int n,i,j,k;
    public:
    void in()
    {
        cout<<"Enter the range of table (n1,n2): ";
        cin>>n1>>n2;
        cout<<"\nEnter multiples range value (n) :";
        cin>>n;
    }
    void show()
    {
        for(i=1;i<=n;i++)    
        {
            for(j=n1;j<=n2;j++)   
            {
                cout<<j<<" x "<<i<<" = "<<i*j<<"\t";
            }
            cout<<"\n";
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