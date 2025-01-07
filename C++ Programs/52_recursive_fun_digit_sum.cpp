#include<iostream>
using namespace std;
class digit_sum
{
    public:
    int dgt_sum(int n)
    {
        if(n>=0&&n<=9)
        {
            return n;
        }
        else
        {
            return (n%10)+dgt_sum(n/10);
        }
        return 0;
    }
};
int main()
{
    digit_sum d;
    int k;
    cout<<"Enter a Number (Integer) : ";
    cin>>k;
    int temp=k;
    int sum = d.dgt_sum(k);
    cout<<"Sum of Digits of "<<temp<<" is "<<sum;
}