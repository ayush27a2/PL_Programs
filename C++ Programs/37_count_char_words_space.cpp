#include <iostream>
using namespace std;
class declare
{
protected:
    char ch;
};
class count : public declare
{
    int c = 0, w = 0,l=0;

public:
    void in()
    {
        cout << "Enter a character : \n";
        while(1)
        {
            ch=cin.get();
            c++;
            if(ch=='*')
            {
                break;
            }
            if(ch=='\n')
            {
                l++;
            }
            if(ch==';'||ch=='\t'||ch=='\n'||ch==' ')
            {
                w++;
            }
        }
    }
    void out()
    {
        cout << "Number of characters : " << c-w-1;
        cout << "\nNumber of Words : " << w;
        cout << "\nNumber of lines : " << l;
    }
};
int main()
{
    count p;
    p.in();
    p.out();
    return 0;
}