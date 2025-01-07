#include <iostream>
#include <string>
using namespace std;
class long_str
{
    string str[100], store;
    ;
    int n;

public:
    int longest_str()
    {
        cout << "Enter number of words : ";
        cin >> n;
        cin.ignore();
        for (int i = 0; i < n; i++)
        {
            cout << "Enter word " << i + 1 << " : ";
            getline(cin, str[i]);
        }
        store = str[0];
        for (int i = 0; i < n; i++)
        {
            if (str[i].length() > store.length())
            {
                store = str[i];
            }
        }
        cout << "Longest String is " << store;
        return 0;
    }
};
int main()
{
    long_str s;
    s.longest_str();
    return 0;
}