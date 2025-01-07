#include <iostream>
using namespace std;
class evodd
{
    public:
int isEven(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
};
int main()
{
    evodd e;
    int n;
    int k;
    cout << "Enter Numbers of Integers : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "\nEnter an Integer : ";
        cin >> k;
        if (e.isEven(k))
        {
            cout <<"\n"<< k<<" is an Even number.\n";
        }
        else
        {
            cout <<"\n"<< k<<" is an Odd number.\n";
        }
    }
    return 0;
}