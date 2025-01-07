#include<iostream>
using namespace std;
class rev_str
{
    public:
    int rev_string(string str)
    {
        cout<<"Reverse of String is :-\n";
        for(int i=str.length()-1;i>=0;i--)
        {
            cout<<str[i];
        }
        return 0;
    }
};
int main()
{
    rev_str r;
    string s;
    cout<<"Enter a String : ";
    getline(cin,s);
    r.rev_string(s);
    return 0;
}