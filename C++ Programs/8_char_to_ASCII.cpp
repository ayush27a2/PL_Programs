#include<iostream>
using namespace std;
class character
{
    protected:
    char ch;
};
class ascii : public character
{
    public:
    void in()
    {
        cout<<"Enter Any Character : ";
        cin>>ch;
    }
    void show()
    {
        cout<<"\nASCII value of "<<ch<<" is "<<int(ch);
    }
};
int main()
{
    ascii a;
    a.in();
    a.show();
    return 0;
}