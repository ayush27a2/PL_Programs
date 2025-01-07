#include<iostream>
using namespace std;
class declare
{
    protected:
    char l_char;
};
class vowel:public declare
{
    public:
    void in()
    {
        cout<<"Enter a Lowercase character : ";
        cin>>l_char;
    }
    void show()
    {
        if(l_char=='a'||l_char=='e'||l_char=='i'||l_char=='o'||l_char=='u')
        {
            cout<<"Entered character is a Vowel.";
        }
        else
        {
            cout<<"Entered character is a Consonant.";
        }
    }
};
int main()
{
    vowel v;
    v.in();
    v.show();
    return 0;
}