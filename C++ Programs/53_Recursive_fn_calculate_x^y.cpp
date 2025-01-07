#include<iostream>
using namespace std;
class calculate
{
    public:
    int cal(int x,int y)
    {
        if(y==0)
        {
            return 1;
        }
        else if(y==1)
        {
            return x;
        }
        else
        {
            return x*cal(x,y-1);
        }
        return 0;
    }
};
int main()
{
    calculate c;
    int m,n;
    cout<<"Enter Value of x and y (to compute x^y) : ";
    cin>>m>>n;
    int res=c.cal(m,n);
    cout<<"x^y i.e. "<<m<<"^"<<n<<" = "<<res;
}