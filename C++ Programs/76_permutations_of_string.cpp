#include<iostream>
#include<algorithm>
using namespace std;
class per_str
{
    public:
    int permutation(string str,int start,int end)
    {
        if(start==end)
        {
        cout<<str<<"  ";
        }
        else
        {
        for(int i=start;i<end;i++)
        {
            swap(str[start],str[i]);
            permutation(str,start+1,end);
            swap(str[start],str[i]); 
        }
        }
        return 0;
    }
};
int main()
{
    per_str p;
    string s;
    int l,r;
    cout<<"Enter a String : ";
    getline(cin,s);
    p.permutation(s,0,s.length());
    return 0;
}