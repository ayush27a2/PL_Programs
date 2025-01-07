#include<iostream>
using namespace std;
class emp
{
    protected:
    float emp_id,basic_sal;
};
class detail:public emp
{
    float hr,da,ptax,home_sal;
    public:
    void in()
    {
        cout<<"Enter Employee Id : ";
        cin>>emp_id;
        cout<<"\nEnter Employee's Basic Salary : ";
        cin>>basic_sal;
    }
    void cal()
    {
        hr = basic_sal*0.1;
        da = basic_sal*0.3;
        ptax = basic_sal*0.05;
        home_sal = basic_sal + hr + da - ptax;
    }
    void show()
    {
        cout<<"--------Employee Details-----------\n";
        cout<<"Employee Id = "<<emp_id;
        cout<<"\nEmployee's Home Salary = "<<home_sal;
    }
};
int main()
{
    detail d;
    d.in();
    d.cal();
    d.show();
    return 0;
}