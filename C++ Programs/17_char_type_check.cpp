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
        else if(ch>='a'&&ch<='z')
        {
            cout<<"Entered character is a Lowercase Character.";
        }
        else if(ch>='A'&&ch<='Z')
        {
            cout<<"Entered character is a Uppercase Character.";
        }
        else
        {
            cout<<"Entered character is a Special Character.";
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