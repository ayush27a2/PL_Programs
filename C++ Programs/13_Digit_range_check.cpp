#include<iostream>
using namespace std;
class character
{
    protected:
    char ch;
};
class check:public character
{
    public:
    void in()
    {
        cout<<"Enter any character : ";
        cin>>ch;
    }
    void show()
    {
        if(ch>='0'&&ch<='9')
        {
            cout<<"Entered character is a Digit.";
        }
        else
        {
            cout<<"Entered character is NOT a Digit.";
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