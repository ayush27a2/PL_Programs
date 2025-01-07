#include<iostream>
using namespace std;
class array
{
    int n,a,flag=0;
    int prime[100];
    public:
    void in()
    {
        cout<<"Enter numbers of value you want to enter (n) : ";
        cin>>n;
        cout<<"Enter "<<n<<" ELements in the Array : ";
        for(int i=0;i<n;i++)
        {
            flag=0;
            cin>>a;
            for(int j=2;j<=a/2;j++)
            {
                if(a%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                prime[i]=a;
            }
        }
    }
    void show()
    {
        cout<<"The Prime Numbers Stored in Array are :-\n";
        for(int i=0;i<n;i++)
        {
            if(prime[i]!=0&&prime[i]!=1)
            {
            cout<<prime[i]<<"   ";
            }
        }
    }
};
int main()
{
    array obj;
    obj.in();
    obj.show();
    return 0;
}