#include<iostream>
using namespace std;
class year
{
    protected:
    int year;
};
class leap : public year
{
    public:
    void in()
    {
        cout<<"Enter any Year : ";
        cin>>year;
    }
    void show()
    {
        if((year%4==0&&year%100!=0)||year%400==0)
        {
            cout<<year<<" is a Leap Year.";
        }
        else
        {
            cout<<year<<" is NOT a Leap Year.";
        }
    }
};
int main()
{
    leap l;
    l.in();
    l.show();
    return 0;
}