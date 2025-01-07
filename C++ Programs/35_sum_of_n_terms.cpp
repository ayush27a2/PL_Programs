#include<iostream>
using namespace std;
class terms
{
    protected:
    float x,sum_terms;
};
class sum:public terms
{
    int n;
    public:
    void in()
    {
        cout<<"Enter a real number (x) : ";
        cin>>x;
        cout<<"Enter an Integer (n) : ";
        cin>>n;
    }
    void show()
    {
        sum_terms = x*n*n;
        cout<<"Sum of "<<n<<" terms of the series x+3x+5x+7x+.... is : "<<sum_terms;
    }
};
int main()
{
    sum s;
    s.in();
    s.show();
    return 0;
}