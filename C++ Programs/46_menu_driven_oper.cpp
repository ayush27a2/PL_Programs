#include<iostream>
using namespace std;
class driven
{
    protected:
    double a1,b1,a2,b2;
};
class menu:public driven
{
    double res1=0,res2=0;
    public:
    void in()
    {
        cout<<"\nEnter 1st Complex Number (real part (a1), imaginary part (b1)) : ";
        cin>>a1>>b1;
        cout<<"\nEnter 2nd Complex Number (real part (a2), imaginary part (b2)) : ";
        cin>>a2>>b2;
    }
    void add()
    {
        res1 = a1+a2;
        res2 = b1+b2;
        if(res2>0)
        {
        cout<<"\nSum of two entered complex numbers : "<<res1<<"+"<<res2<<"i"<<"\n";
        }
        else if(res2<0)
        {
            cout<<"\nSum of two entered complex numbers : "<<res1<<""<<res2<<"i"<<"\n";
        }
        else
        {
            cout<<"\nSum of two entered complex numbers : "<<res1<<"\n";
        }
    }
    void sub()
    {
        res1 = a1-a2;
        res2 = b1-b2;
        if(res2>0)
        {
        cout<<"\nSubtraction of two entered complex numbers : "<<res1<<"+"<<res2<<"i"<<"\n";
        }
        else if(res2<0)
        {
            cout<<"\nSubtraction of two entered complex numbers : "<<res1<<""<<res2<<"i"<<"\n";
        }
        else
        {
            cout<<"\nSubtraction of two entered complex numbers : "<<res1<<"\n";
        }
    }
    void mult()
    {
        res1 = (a1*a2)-(b1*b2);
        res2 = (a1*b2)+(a2*b1);
        if(res2>0)
        {
        cout<<"\nMultiplication of two entered complex numbers : "<<res1<<"+"<<res2<<"i"<<"\n";
        }
        else if(res2<0)
        {
            cout<<"\nMultiplication of two entered complex numbers : "<<res1<<""<<res2<<"i"<<"\n";
        }
        else
        {
            cout<<"\nMultiplication of two entered complex numbers : "<<res1<<"\n";
        }
    }
};
int main()
{
    menu m;
    m.in();
    while(1)
    {
        int choice;
        cout<<"\n1.To ADD.\n";
        cout<<"2.To SUBTRACT.\n";
        cout<<"3.To MULTIPLY.\n";
        cout<<"4.To EXIT the Program.\n";
        cout<<"\nEnter Your Choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            m.add();
            break;
            case 2:
            m.sub();
            break;
            case 3:
            m.mult();
            break;
            case 4:
            exit(1);
            default:
            cout<<"Wrong Choice.\n";
            break;
        }
    }
    return 0;
}