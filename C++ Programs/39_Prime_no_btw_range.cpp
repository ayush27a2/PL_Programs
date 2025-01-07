#include<iostream>
using namespace std;
class prime
{
    protected:
    int n1,n2;
};
class range:public prime
{
    int i,j,count=0;
    public:
    void in()
    {
        cout<<"Enter range (n1 to n2) : ";
        cin>>n1>>n2;
        cout<<"Prime Numbers between "<<n1<<" and "<<n2<<" :-\n";
    }
    void prime_check()
    {
        for(i=n1;i<=n2;i++)
        {
            for(j=1;j<=i;j++)
            {
            if(i%j==0)
            {
                count++;
            }
            }
            if(count==2)
            {
                cout<<i<<"  ";
            }
            count=0;
        }
    } 
};
int main()
{
    range r;
    r.in();
    r.prime_check();
    return 0;
}