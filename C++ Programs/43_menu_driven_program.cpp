#include<iostream>
using namespace std;
class driven
{
    protected:
    char ch;
};
class menu:public driven
{
    public:
    void in()
    {
        cout<<"Enter any Character : ";
        cin>>ch;
    }
    void message()
    {
        cout<<"1.Check if it is an Alphabet.";
        cout<<"\n2.Check if it is a Digit.";
        cout<<"\n3.Check if it is Lowercase.";
        cout<<"\n4.Check if it is Uppercase.";
        cout<<"\n5.Convert it to Uppercase.";
        cout<<"\n6.Convert it to Lowercase.\n";
    }
    void al_check()
    {
        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
        {
            cout<<"It is an Alphabet.\n";
        }
        else
        {
            cout<<"It is NOT an Alphabet.\n";
        }
    }
    void digit_check()
    {
        if(ch>='0'&&ch<='9')
        {
            cout<<"It is a Digit.\n";
        }
        else
        {
            cout<<"It is NOT a Digit.\n";
        }
    }
    void lcase_check()
    {
        if(ch>='a'&&ch<='z')
        {
            cout<<"It is a Lowercase.\n";
        }
        else
        {
            cout<<"It is NOT a Lowercase.\n";
        }
    }
    void ucase_check()
    {
        if(ch>='A'&&ch<='Z')
        {
            cout<<"It is an Uppercase.\n";
        }
        else
        {
            cout<<"It is NOT an Uppercase.\n";
        }
    }
    void convert_ucase()
    {
        if(ch>='a'&&ch<='z')
        {
            ch=ch-32;
            cout<<"After Converting in Uppercase, Character = "<<ch<<"\n";
        }
        else if(ch>='A'&&ch<='Z')
        {
        cout<<"Character is already in Uppercase.\n";
        }
        else
        {
            cout<<"Enter Character between 'a' and 'z' ONLY (in 5th choice).\n";
        }
    }
    void convert_lcase()
    {
        if(ch>='A'&&ch<='Z')
        {
            ch=ch+32;
            cout<<"After Converting in Lowercase, Character = "<<ch<<"\n";
        }
        else if(ch>='a'&&ch<='z')
        {
        cout<<"Character is already in Lowercase.\n";
        }
        else
        {
            cout<<"Enter Character between 'A' and 'Z' ONLY (in 6th choice).\n";
        } 
    }
};
int main()
{
    menu m;
    while(1)
    {
        m.in();
        m.message();
        int choice;
        cout<<"Enter your Choice (1 to 6) : \n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            m.al_check();
            break;
            case 2:
            m.digit_check();
            break;
            case 3:
            m.lcase_check();
            break;
            case 4:
            m.ucase_check();
            break;
            case 5:
            m.convert_ucase();
            break;
            case 6:
            m.convert_lcase();
            break;
            default:
            cout<<"Wrong Choice.\n";
            break;
        }
    }
    return 0;
}