#include<iostream>
#include<string>
using namespace std;
class palin_str
{
    public:
    int pal_str(string str,string str2)
    {
        for(int i=str.length()-1;i>=0;i--)
        {
            str2=str2 + str[i];
        }
        if(str==str2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }  
};
int main()
{
    palin_str p;
    string s1,s2;
    cout<<"Enter a String : ";
    getline(cin,s1);
    if(p.pal_str(s1,s2)==1)
    {
        cout<<"It is a Palindrome String.";
    }
    else
    {
        cout<<"It is NOT a Palindrome String.";
    }
    return 0;
}