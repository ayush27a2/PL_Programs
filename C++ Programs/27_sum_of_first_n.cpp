#include<iostream>
using namespace std;
class num
{
    protected:
    int n;
};
class sum:public num
{
    int sum;
    public:
    void in()
    {
        cout<<"Enter Value of n : ";
        cin>>n;
    }
    void cal()
    {
        sum=(n*(n+1))/2;
    }
    void show()
    {
        cout<<"Sum of First "<<n<<" Numbers = "<<sum;
    }
};
int main()
{
    sum s;
    s.in();
    s.cal();
    s.show();
    return 0;
}