#include<iostream>
using namespace std;
class check
{
    public:
    int count(char ch)
    {
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        {
            return 1;
        }
        else if(ch>='0'&&ch<='9')
        {
            return 2;
        }
        else
        {
            return 3;
        }
        return 0;
    }
};
int main()
{
    check c;
    int alp_count=0,digit_count=0,ss_count=0;
    char k='\0';
    cout<<"Enter any number of Characters until EOF (TERMINATE with ctrl+z + ENTER) : ";
    while(cin>>k)
    {
        if(c.count(k)==1)
        {
            alp_count++;
        }
        else if(c.count(k)==2)
        {
            digit_count++;
        }
        else
        {
            ss_count++;
        }
    }
    cout<<"Total number of Alphabets = "<<alp_count;
    cout<<"\nTotal number of Digits = "<<digit_count;
    cout<<"\nTotal number of Special Symbols = "<<ss_count;
    return 0;
}