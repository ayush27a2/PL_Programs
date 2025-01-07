#include<iostream>
#include<algorithm>
using namespace std;
class dictionary
{
    string str,words[100];
    int n;
    public:
    int dict_order()
    {
        cout<<"Enter the number of words : ";
        cin>>n;
        cin.ignore();
        for(int i=0;i<n;i++)
        {
        cout<<"Enter word "<<i+1<<" : ";
        getline(cin,words[i]);
        }
        sort(words,words+n);
        cout<<"Dictionary Order of words entered are :-\n";
        for(int i=0;i<n;i++)
        {
        cout<<words[i]<<"\n";
        }
        return 0;
    }
};
int main()
{
    dictionary d;
    d.dict_order();
    return 0;
}