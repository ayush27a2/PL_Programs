#include<iostream>
using namespace std;
class emp
{
    protected:
    float anual_bs;
};
class tax:public emp
{
    float tax;
    public:
    void in()
    {
        cout<<"Enter Anual Basic Salary of an Employee : ";
        cin>>anual_bs;
    }
    void cal()
    {
        if(anual_bs<150000)
        {
            tax = 0;
        }
        else if(anual_bs>150000 && anual_bs<300000)
        {
            tax = anual_bs*0.2;
        }
        else if(anual_bs>300000)
        {
            tax = anual_bs*0.3;
        }
    }
    void show()
    {
        cout<<"Income Tax = "<<tax;
    }
};
int main()
{
    tax t;
    t.in();
    t.cal();
    t.show();
    return 0;
}