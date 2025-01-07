#include<iostream>
using namespace std;
class arm_strg
{
    protected:
    int n;
};
class check:public arm_strg
{
    int i,d,res=1,sum,pow=0,j,temp;
    public:
    void armstrong()
    {
        cout<<"Armstrong numbers between 1 to 500 :-\n";
        for(i=1;i<=500;i++)
        {
            n=i;
            temp=n;
            sum=0;
        while (n > 0)
        {
            d = n % 10;
            pow++;
            n = n / 10;
        }
        n = temp;
        while (n > 0)
        {
            d = n % 10;
            for(j = 1; j <= pow; j++)
            {
                res = res * d;
            }
            sum = sum + res;
            res = 1;
            n = n / 10;
        }
        if(sum==temp)
        {
        cout<<temp<<"\n";
        }
        pow=0;
        }
    }
};
int main()
{
    check c;
    c.armstrong();
    return 0;
}