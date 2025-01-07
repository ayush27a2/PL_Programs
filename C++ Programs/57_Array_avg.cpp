#include<iostream>
using namespace std;
class average
{
    protected:
    int ar[100];
};
class array:public average
{
    float avg,sum=0;
    int n;
    public:
    void in()
    {
        cout<<"Enter Size of Array (n) : ";
        cin>>n;
        cout<<"Enter value of Array (value limit - "<<n<<") : ";
        for(int i=0;i<=n-1;i++)
        {
            cin>>ar[i];
        }
    }
    void output()
    {
        for(int i=0;i<=n-1;i++)
        {
            sum = sum + ar[i];
        }
        avg=sum/n;
        cout<<"The Average of "<<n<<" values in the Array = "<<avg;
    }
};
int main()
{
    array a;
    a.in();
    a.output();
    return 0;
}