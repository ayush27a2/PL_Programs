#include<iostream>
using namespace std;
class triangle
{
    protected:
    int a,b,c;
};
class valid_check:public triangle
{
    public:
    void in()
    {
        cout<<"Enter Three Sides of a Triangle : ";
        cin>>a>>b>>c;
    }
    void show()
    {
        if(b+c>a && a+c>b && a+b>c)
        {
            cout<<"Triangle is Valid.";
        }
        else
        {
            cout<<"Triangle is InValid.";
        }
    }
};
int main()
{
    valid_check v;
    v.in();
    v.show();
    return 0;
}