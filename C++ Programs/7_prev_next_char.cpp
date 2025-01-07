#include<iostream>
using namespace std;
class declare
{
    protected:
    char ch;
};
class prev_next:public declare
{
    public:
    void in()
    {
        cout<<"Enter any Character : ";
        cin>>ch;
    }
    void show()
    {
        cout<<"\nThe Previous Character is "<<char(ch-1);
        cout<<"\nThe Next Character is "<<char(ch+1);
    }
};
int main()
{
    prev_next p;
    p.in();
    p.show();
    return 0;
}