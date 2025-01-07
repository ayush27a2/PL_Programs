#include<iostream>
using namespace std;
class num
{
    protected:
    int a,b;
};
class interchange:public num
{
    public:
    void in()
    {
        cout<<"Enter Two Number (a,b) : ";
        cin>>a>>b;
    }
    void show()
    {
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"Value after interchanging them :-\n";
        cout<<"a = "<<a<<" and b = "<<b;
    }
};
int main()
{
    interchange s;
    s.in();
    s.show();
    return 0;
}