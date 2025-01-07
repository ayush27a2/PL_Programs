#include<iostream>
using namespace std;
class next_char
{
    public:
    int nextChar(char ch,int n)
    {
        cout<<"Next "<<n<<" Characters are :-\n";
        for(int i=1;i<=n;i++)
        {
            ch=ch+1;
            cout<<ch<<"   ";
        }
        return 0;
    }
};
int main()
{
    next_char c;
    int k;
    char ch1;
    cout<<"\nEnter a Character : ";
    cin>>ch1;
    cout<<"\nEnter value of n (To display next n characters) : ";
    cin>>k;
    c.nextChar(ch1,k);
    return 0;
}