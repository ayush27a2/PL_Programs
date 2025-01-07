#include<iostream>
using namespace std;
class declare
{
    protected:
    char ch;
};
class char_check:public declare
{
    public:
    void in()
    {
        cout<<"Enter a Character : ";
        cin>>ch;
    }
    void show()
    {
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        {
            cout<<"It is an Alphabet.\n";
            if(ch>='a'&&ch<='z')
            {
                cout<<"And it is an Lowercase.\n";
                ch=ch-32;
                cout<<"It's Uppercase = "<<ch;
            }
            else if(ch>='A'&&ch<='Z')
            {
                cout<<"And it is an Uppercase.\n";
                ch=ch+32;
                cout<<"It's Lowercase = "<<ch;
            }
        }
        else if(ch>='0'&&ch<='9')
        {
            cout<<"It is a Digit.\n";
        }
        else
        {
            cout<<"It is a Punctuation Symbol.\n";
        }
    }
};
int main()
{
    char_check c;
    c.in();
    c.show();
    return 0;
}