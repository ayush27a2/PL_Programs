#include<iostream>
using namespace std;
class num
{
    protected:
    int n;
};
class text:public num
{
    int rev=0,d,count=0;
    public:
    void in()
    {
        cout<<"Enter an Integer : ";
        cin>>n;
    }
    void reverse()
    {
        while(n>0)
        {
            d=n%10;
            count++;
            rev=rev*10+d;
            n=n/10;
        }
    }
    void show()
    {
        while(count!=1)
        {
            d=rev%10;
            count--;
            switch (d)
        {
        case 0:
            cout << "ZERO-";
            break;
        case 1:
            cout << "ONE-";
            break;
        case 2:
            cout << "TWO-";
            break;
        case 3:
            cout << "THREE-";
            break;
        case 4:
            cout << "FOUR-";
            break;
        case 5:
            cout << "FIVE-";
            break;
        case 6:
            cout << "SIX-";
            break;
        case 7:
            cout << "SEVEN-";
            break;
        case 8:
            cout << "EIGHT-";
            break;
        case 9:
            cout << "NINE-";
            break;
        default:
            cout << "Not a Digit";
            break;
        }
        rev=rev/10;
        }
        switch (rev)
        {
        case 0:
            cout << "ZERO.";
            break;
        case 1:
            cout << "ONE.";
            break;
        case 2:
            cout << "TWO.";
            break;
        case 3:
            cout << "THREE.";
            break;
        case 4:
            cout << "FOUR.";
            break;
        case 5:
            cout << "FIVE.";
            break;
        case 6:
            cout << "SIX.";
            break;
        case 7:
            cout << "SEVEN.";
            break;
        case 8:
            cout << "EIGHT.";
            break;
        case 9:
            cout << "NINE.";
            break;
        default:
            cout << "Not a Digit.";
            break;
        }
    }
};
int main()
{
    text r;
    r.in();
    r.reverse();
    r.show();
    return 0;
}