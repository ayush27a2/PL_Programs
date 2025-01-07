#include<iostream>
using namespace std;
class search
{
    int s,ar[10],flag=0;;
    public:
    void in()
    {
        cout<<"Enter 10 Numbers in the Array : ";
        for(int i=0;i<10;i++)
        {
            cin>>ar[i];
        }
        cout<<"Enter a Searching Value : ";
        cin>>s;
    }
    void check()
    {
        for(int i=0;i<10;i++)
        {
            if(ar[i]==s)
            {
                flag=1;
                break;
            }
        }
    }
    void show()
    {
        if(flag==1)
        {
            cout<<"\nSearching Value is Available.\n";
        }
        else
        {
            cout<<"\nSearching Value is NOT Available.\n";
        }
    }
};
int main()
{
    search p;
    p.in();
    p.check();
    p.show();
    return 0;
}