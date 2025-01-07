#include <iostream>
using namespace std;
class convert
{
    int deci_num,temp,d;
    int array[50];
    int i=-1;
public:
    void in()
    {
        cout << "Enter a Decimal Number : ";
        cin >> deci_num;
        temp = deci_num;
    }
    void binary()
    {
        while(deci_num>0)
        {
            d=deci_num%2;
            array[++i]=d;
            deci_num=deci_num/2;
        }
        cout<<"Binary of "<<temp<<" = ";
        while(i>=0)
        {
            cout<<array[i--];
        }
    }
    void octal()
    {
        cout<<"\n";
        deci_num=temp;
        while(deci_num>0)
        {
            d=deci_num%8;
            array[++i]=d;
            deci_num=deci_num/8;
        }
        cout<<"Octal of "<<temp<<" = ";
        while(i>=0)
        {
            cout<<array[i--];
        }
    }
    void hexadecimal()
    {
        cout<<"\n";
        deci_num=temp;
        while(deci_num>0)
        {
            d=deci_num%16;
            array[++i]=d;
            deci_num=deci_num/16;
        }
        cout<<"Hexadecimal of "<<temp<<" = ";
        while(i>=0)
        {
            switch(array[i])
            {
                case 10:
                cout<<"A";
                i--;
                break;
                case 11:
                cout<<"B";
                i--;
                break;
                case 12:
                cout<<"C";
                i--;
                break;
                case 13:
                cout<<"D";
                i--;
                break;
                case 14:
                cout<<"E";
                i--;
                break;
                case 15:
                cout<<"F";
                i--;
                break;
                default:
                cout<<array[i--];
                break;
            }
        }
    }
};
int main()
{
    convert c;
    c.in();
    c.binary();
    c.octal();
    c.hexadecimal();
    return 0;
}