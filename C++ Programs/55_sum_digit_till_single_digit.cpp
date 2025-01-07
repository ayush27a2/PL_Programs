#include<iostream>
using namespace std;
class sum
{
    public:
    int sum_digit(int n)
    {
        if(n>=0&&n<=9)
        {
            return n;
        }
        else
        {
            int sum=0;
            while(n>0)
            {
            int d = n%10;
            sum = sum+d;
            n = n/10;
            }
            cout<<sum<<"    ";
            return sum_digit(sum);
        }
        return 0;
    }
};
int main()
{
    sum s;
    int k;
    cout<<"Enter a Number : ";
    cin>>k;
    cout<<"Sum of Digits of "<<k<<" till you get a Single Digit number :-\n";
    cout<<k<<"    ";
    s.sum_digit(k);
}