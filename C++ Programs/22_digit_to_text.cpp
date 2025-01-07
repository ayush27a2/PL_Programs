#include <iostream>
using namespace std;
class digit
{
protected:
    int d;
};
class text : public digit
{
public:
    void in()
    {
        cout << "Enter a single digit number : ";
        cin >> d;
    }
    void show()
    {
        switch (d)
        {
        case 0:
            cout << "ZERO";
            break;
        case 1:
            cout << "ONE";
            break;
        case 2:
            cout << "TWO";
            break;
        case 3:
            cout << "THREE";
            break;
        case 4:
            cout << "FOUR";
            break;
        case 5:
            cout << "FIVE";
            break;
        case 6:
            cout << "SIX";
            break;
        case 7:
            cout << "SEVEN";
            break;
        case 8:
            cout << "EIGHT";
            break;
        case 9:
            cout << "NINE";
            break;
        default:
            cout << "Not a Digit";
            break;
        }
    }
};
int main()
{
    text t;
    t.in();
    t.show();
    return 0;
}