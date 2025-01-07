#include<iostream>
using namespace std;
class time
{
    protected:
    int hour,minute,second;
};
class check:public time
{
    public:
    void in()
    {
        cout<<"Enter the Time (as Hour,Minute,Second): ";
        cin>>hour>>minute>>second;
    }
    void show()
    {
        if((hour>=0&&hour<24)&&(minute>=0&&minute<60)&&(second>=0&&second<60))
        {
            cout<<"Time is Valid.";
        }
        else
        {
            cout<<"Time is InValid";
        }
    }
};
int main()
{
    check c;
    c.in();
    c.show();
    return 0;
}