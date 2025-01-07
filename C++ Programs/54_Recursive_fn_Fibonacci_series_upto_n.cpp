#include<iostream>
using namespace std;
class fib
{
    public:
    int fibonacci(int n)
    {
        if(n==0||n<0)
        {
            return 0;
        }
        else if(n==1)
        {
            return 1;
        }
        else
        {
            return fibonacci(n-1)+fibonacci(n-2);
        }
        return 0;
    }
};
int main()
{
    fib f;
    int k,x=1,y=1;
    cout<<"Enter value of n : ";
    cin>>k;
    cout<<"Fibonacci Number upto "<<k<<" are :-\n";
    if (f.fibonacci(k)==0) 
    {
        cout<<"0";
    }
    else if(f.fibonacci(k)==1)
    {
        cout<<"1";
    }
    else
    {
    cout<<x<<"   "<<y<<"   ";
    for(int i=3;i<=k;i++)
    {
        int res=f.fibonacci(i);
        cout<<res<<"   ";
        x=y;
        y=res;
    }
    }
    return 0;
}