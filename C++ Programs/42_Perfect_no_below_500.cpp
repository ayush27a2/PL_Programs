#include<iostream>
using namespace std;
class pft_num
{
    protected:
    int i,sum;
};
class print:public pft_num
{
    int n,j;
    public:
    void show()
    {
        cout<<"Perfect numbers below 500 :-\n";
        for(i=1;i<=500;i++)
        {
            n=i;
            sum=0;
            for(j=1;j<=n-1;j++)
            {
                if(n%j==0)
                {
                    sum=sum+j;
                }
            }
            if(sum==n)
            {
                cout<<n<<"\n";
            }
        }
    }
};
int main()
{
    print p;
    p.show();
    return 0;
}