#include <iostream>
using namespace std;
class str_op
{
    string str, str2, store;

public:
    int sub_str()
    {
        cout << "Enter 1st String : ";
        getline(cin, str);
        cout << "Enter 2nd String : ";
        getline(cin, str2);
        for (int i = 0; i <= str.length(); i++)
        {
            if (i == str.length() || str[i] == ' ')
            {
                if (store == str2)
                {
                    cout << "\n2nd string is a substring of 1st string.\n";
                    return 0;
                }
                store.clear();
            }
            else
            {
                store += str[i];
            }
        }
        cout << "\nstr2 is not a substring of str.\n";
        return 0;
    }
    int occ_str()
    {
        int str_count[256] = {0};
        cout << "Enter a String : ";
        getline(cin, str);
        for (int i = 0; i < str.length(); i++)
        {
            str_count[int(str[i])]++;
        }
        for (int i = 0; i < 256; i++)
        {
            if (str_count[i] > 0)
            {
                cout << "\nNo. of Occurrences of " << char(i) << " = " << str_count[i] << "\n";
            }
        }
        return 0;
    }
    int replace_char()
    {
        char ch,ch2;
        cout<<"Enter a String : ";
        getline(cin,str);
        cout<<"Enter a character you want to replace with another : ";
        cin>>ch;
        cout<<"Enter a character you want to replace : ";
        cin>>ch2;
        cout<<"\nString after replacing "<<ch<<" with "<<ch2<<" is :-\n"; 
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==' '||i==str.length())
            {
                cout<<store<<" ";
                store.clear();
            }     
            else
            {
                if(str[i]==ch)
                {
                    str[i]=ch2;
                }
                store=store+str[i];
            }      
        }   
        cout<<store<<"\n";
        return 0;
    }
};
int main()
{
    str_op p;
    while(1)
    {
    int choice;
    cout<<"\n1.Check if one string is a substring of another.";
    cout<<"\n2.Count number of occurrences of a character in the string.";
    cout<<"\n3.Replace all occurrences of a character by another.";
    cout<<"\n4.Exit the Program.\n\n";
    cout<<"Enter your choice : ";
    cin>>choice;
    cin.ignore();
    switch(choice)
    {
        case 1:
        p.sub_str();
        break;
        case 2:
        p.occ_str();
        break;
        case 3:
        p.replace_char();
        break;
        case 4:
        exit(1);
        default:
        cout<<"\nInvalid Choice. Please enter from 1 to 4 ONLY.\n";
        break;
    }
    }
    return 0;
}