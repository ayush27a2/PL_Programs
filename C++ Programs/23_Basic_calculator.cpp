#include<iostream>
using namespace std;
class declare
{
    protected:
    int a,b;
};
class cal:public declare
{
    char op;
    public:
    void in()
    {
        cout<<"Enter Two Integers : ";
        cin>>a>>b;
        cout<<"Enter an Operator (+,-,*,/) to perform operation : ";
        cin>>op;
    }
    void show()
    {
        switch(op)
        {
            case '+':
            cout<<"Sum of "<<a<<" and "<<b<<" = "<<a+b;
            break;
            case '-':
            cout<<"Subtraction of "<<a<<" and "<<b<<" = "<<a-b;
            break;
            case '*':
            cout<<"Multiplication of "<<a<<" and "<<b<<" = "<<a*b;
            break;
            case '/':
            cout<<"Division of "<<a<<" and "<<b<<" = "<<a/b;
            break;
            default:
            cout<<"Invalid Operator";
            break;
        }
    }
};
int main()
{
    cal o;
    o.in();
    o.show();
    return 0;
}