#include<iostream>
using namespace std;
class declare
{
    protected:
    int ar[100];
};
class Array:public declare
{
    int i,n,gt,st;
    public:
    void in()
    {
        cout<<"Enter Array Size (n) : ";
        cin>>n;
        int ar[n];
        cout<<"Enter Values in Array (value limit - "<<n<<") : ";
        for(i=0;i<=n-1;i++)
        {
            cin>>ar[i];
        }
        gt = ar[0];
        st = ar[0];
    }
    void show()
    {
        for(i=1;i<=n-1;i++)
        {
            if(gt<ar[i])
            {
                gt=ar[i];
            }
            if(st>ar[i])
            {
                st=ar[i];
            }
        }
        cout<<"The Largest Value in Array = "<<gt<<"\nThe Smallest Value in Array = "<<st;
        cout<<"\nThe Range of the elements in th Array = "<<gt-st;
    }
};
int main()
{
    class Array a;
    a.in();
    a.show();
    return 0;
}