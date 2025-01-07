#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;
class str_fun
{
    string str;
    string str2;
    public:
    void len()
    {
        int count=0;
        cout<<"\n\nEnter a String : ";
        getline(cin,str);
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==' ')
            {
                count++;
            }
        }
        cout<<"\nLength of the String is "<<str.length()-count;
    }
    void copy()
    {
        cout<<"\n\nEnter a String : ";
        getline(cin,str);
        str2 = str;
        cout<<"\nOriginal String : "<<str;
        cout<<"\nCopied String : "<<str2;
    }
    void concate()
    {
        cout<<"\n\nEnter 1st String : ";
        getline(cin,str);
        cout<<"\n\nEnter 2nd String : ";
        getline(cin,str2);
        string ch = str + str2;
        cout<<"\nConcatenation of Strings Entered = "<<ch;
    }
    void comp()
    {
        cout<<"\n\nEnter 1st String : ";
        getline(cin,str);
        cout<<"\n\nEnter 2nd String : ";
        getline(cin,str2);
        int result = str.compare(str2);
        if(result<0)
        {
            cout<<"\n\n"<<str<<" is Smaller than "<<str2;
        }
        else if(result>0)
        {
            cout<<"\n\n"<<str<<" is Greater than "<<str2;
        }
        else
        {
            cout<<"\n\n"<<str<<" is Equal to "<<str2;
        }
    }
    void rev()
    {
        cout<<"\n\nEnter a String : ";
        getline(cin,str);
        str2=str;
        reverse(str.begin(),str.end());
        cout<<"\nReverse of "<<str2<<" is "<<str;
    }
    void upcase()
    {
        cout<<"\n\nEnter a String : ";
        getline(cin,str);
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='a'&&str[i]<='z')
            {
                str[i] = toupper(str[i]);
            }
        }
        cout<<"\nUppercase of String = "<<str;
    }
    void lowcase()
    {
        cout<<"\n\nEnter a String : ";
        getline(cin,str);
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
            {
                str[i] = tolower(str[i]);
            }
        }
        cout<<"\nLowercase of String = "<<str;
    }
    void checkcase()
    {
        cout<<"\n\nEnter a String : ";
        getline(cin,str);
        int res1=0,res2=0;
        for(int i=0;i<str.length();i++)
        {
            if(islower(str[i]))
            {
                res1=1;
                break;
            }
        }
        for(int i=0;i<str.length();i++)
        {
            if(isupper(str[i]))
            {
                res2=1;
                break;
            }
        }
        if(res1==1&&res2==1)
        {
            cout<<"\n\n"<<str<<" is Mixture of Upper and Lower case.";
        }
        else if(res1==1&&res2==0)
        {
            cout<<"\n\n"<<str<<" is Lowercase.";
        }
        else if(res2==1&&res1==0)
        {
            cout<<"\n\n"<<str<<" is Uppercase.";
        }
        else
        {
            cout<<"\n\nEmpty string. No character/string is entered.";
        }
    }
};
int main()
{
    str_fun s;
    while(1)
    {
    int choice;
    cout<<"\n\nPerform the following operations on strings using standard library functions :-\n";
    cout<<"\n1.Length";
    cout<<"\n2.Copy";
    cout<<"\n3.Concatenation.";
    cout<<"\n4.Compare.";
    cout<<"\n5.Reverse.";
    cout<<"\n6.Uppercase.";
    cout<<"\n7.Lowercase.";
    cout<<"\n8.Check case.";
    cout<<"\n9.Exit the Program.";
    cout<<"\n\nEnter your Choice : ";
    cin>>choice;
    cin.ignore();
    switch(choice)
    {
        case 1:
        s.len();
        break;
        case 2:
        s.copy();
        break;
        case 3:
        s.concate();
        break;
        case 4:
        s.comp();
        break;
        case 5:
        s.rev();
        break;
        case 6:
        s.upcase();
        break;
        case 7:
        s.lowcase();
        break;
        case 8:
        s.checkcase();
        break;
        case 9:
        exit(1);
        break;
        default:
        cout<<"\nInvalid Choice. Please Enter from 1 to 9 ONLY.\n";
        break;
    }
    }
    return 0;
}