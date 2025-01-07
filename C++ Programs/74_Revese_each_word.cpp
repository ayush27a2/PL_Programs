#include<iostream>
#include<algorithm>
using namespace std;
class rev_word
{
    string str,store;
    public:
    int rev()
    {
        cout<<"Enter a Sentence or words or Character : ";
        getline(cin,str);
        for(int i=0;i<=str.length();i++)
        {
            if(str[i]==' '||i==str.length())
            {
                reverse(store.begin(),store.end());
                cout<<store<<" ";
                store.clear();
            }
            else
            {
                store=store+str[i];
            }
        }
        return 0;
    }
};
int main()
{
    rev_word r;
    r.rev();
    return 0;
}