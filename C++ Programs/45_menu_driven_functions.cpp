#include<iostream>
#include<cmath>
using namespace std;
class declare
{
    protected:
    double x;
};
class lib_fn:public declare
{
    public:
    void sine()
    {
        cout<<"\nEnter Angle (in radian) : ";
        cin>>x;
        cout<<"\n------OUTPUT------\n";
        cout<<"\nsin("<<x<<") = "<<sin(x)<<"\n\n";
        cout<<"--------------------\n";
    }
    void cosine()
    {
        cout<<"\nEnter Angle (in radian) : ";
        cin>>x;
        cout<<"\n------OUTPUT------\n";
        cout<<"\ncos("<<x<<") = "<<cos(x)<<"\n\n";
        cout<<"--------------------\n";
    }
    void log_x()
    {
        cout<<"\nEnter value of x : ";
        cin>>x;
        cout<<"\n------OUTPUT------\n";
        cout<<"\nlog("<<x<<") = "<<log(x)<<"\n\n";
        cout<<"--------------------\n";
    }
    void expo()
    {
        cout<<"\nEnter value of x : ";
        cin>>x;
        cout<<"\n------OUTPUT------\n";
        cout<<"\ne^"<<x<<" = "<<exp(x)<<"\n\n";
        cout<<"--------------------\n";
    }
    void sqr_root()
    {
        cout<<"\nEnter value of x : ";
        cin>>x;
        cout<<"\n------OUTPUT------\n";
        cout<<"\nSquare Root of "<<x<<" = "<<sqrt(x)<<"\n\n";
        cout<<"--------------------\n";
    }
};
int main()
{
    lib_fn l;
    while(1)
    {
    int ch;
    cout<<"\n1.To Compute Sine of angle.\n";
    cout<<"2.To Compute Cosine of angle.\n";
    cout<<"3.To Compute Log of x.\n";
    cout<<"4.To Compute Exponential Value (e^x).\n";
    cout<<"5.To Compute Square Root of x.\n";
    cout<<"6.To EXIT the Program.\n\n";
    cout<<"Enter Your Choice (1 to 6) : ";
    cin>>ch;
        switch(ch)
        {
            case 1:
            l.sine();
            break;
            case 2:
            l.cosine();
            break;
            case 3:
            l.log_x();
            break;
            case 4:
            l.expo();
            break;
            case 5:
            l.sqr_root();
            break;
            case 6:
            exit(1);
            default:
            cout<<"\nWrong Choice.\n";
            break;
        }
    }
    return 0;
}