#include<iostream>
using namespace std;
class num
{
    protected:
    int n;
};
class palindrome:public num
{
    int rev=0,d,temp;
    public:
    void in()
    {
        cout<<"Enter a Number : ";
        cin>>n;
        temp=n;
    }
    void reverse()
    {
        while(n>0)
        {
            d=n%10;
            rev=rev*10+d;
            n=n/10;
        }
    }
    void show()
    {
        if(temp==rev)
        {
            cout<<"Entered Number is Palindrome.";
        }
        else
        {
            cout<<"Entered Number is NOT Palindrome.";
        }
    }
};
int main()
{
    palindrome p;
    p.in();
    p.reverse();
    p.show();
    return 0;
}