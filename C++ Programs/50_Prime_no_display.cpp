#include<iostream>
using namespace std;
class prime
{
    int count;
    public:
    int isPrime(int n)
    {
        count=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        return 0;
    }
};
int main()
{
    prime p;
    cout<<"\nFirst 10 Prime numbers are :-\n";
    for(int j=1;j<=30;j++)
    {        
        if(p.isPrime(j)==1)   
        {
            cout<<j<<"   ";
        }
    }
    return 0;
}