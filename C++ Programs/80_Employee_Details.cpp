#include<iostream>
using namespace std;
class details
{
    protected:
    int n,id[100],salary[100],i;
    string nm[100];
};
class employee:private details
{
    public:
    void in()
    {
        cout<<"Enter no. of Employees : ";
        cin>>n;
        if(n<=0)
        {
            cout<<"\nInvalid no. of Employees. It should be greater than 0.\n";
            return;
        }
        cout<<"\nEnter Details of "<<n<<" Employee :-\n";
        cin.ignore();
        for(i=0;i<n;i++)
        {
            cout<<"\nEnter Name of Employee "<<i+1<<" : ";
            getline(cin,nm[i]);
            int flag=0;
            while(flag==0)
            {
                cout<<"\nEnter Id of Employee "<<i+1<<" (Must be Unique) : ";
                cin>>id[i];
                int duplicate=0;
                for(int j=0;j<i;j++)
                {
                    if(id[i]==id[j])
                    {
                        cout<<"\nThis ID is already assigned to another Employee.\n";
                        duplicate=1;
                        break;
                    }
                }
                if(duplicate==0)
                {
                    flag=1;
                }
            }
            cout<<"\nEnter Salary of Employee "<<i+1<<" : ";
            cin>>salary[i];
            cin.ignore();
        }
    }
    void search_nm()
    {
        string nm1;
        int flag=0,i,flag2=0;
        cout<<"Enter Name of Employee : ";
        getline(cin,nm1);
        for(int i=0;i<n;i++)
        {
            if(nm[i]==nm1)
            {
                flag2=1;
                break;
            }
        }
        if(flag2==1)
        {
        cout<<"\nDetails of Employees with NAME = "<<nm1<<" :-\n";
        for(i=0;i<n;i++)
        {
            if(nm[i]==nm1)
            {
                flag=1;
                cout<<"\nEmployee "<<i+1<<" Name : "<<nm[i];
                cout<<"\nEmployee ID : "<<id[i];
                cout<<"\nEmployee Salary : "<<salary[i];
                cout<<"\n\n--------------------------\n";
            }
        }
        }
        if(flag==0)
        {
            cout<<"\nNo Employee is Found with Name = "<<nm1<<".\n";
        }
    }
    void search_id()
    {
        int id1;
        int flag=0,i;
        cout<<"Enter ID of Employee : ";
        cin>>id1;
        for(i=0;i<n;i++)
        {
            if(id[i]==id1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"\nDetails of Employees with ID = "<<id1<<" :-\n";
            cout<<"\nEmployee "<<i+1<<" Name : "<<nm[i];
            cout<<"\nEmployee "<<i+1<<" ID : "<<id[i];
            cout<<"\nEmployee "<<i+1<<" Salary : "<<salary[i];
            cout<<"\n\n--------------------------\n"; 
            
        }
        else
        {
            cout<<"\nNo Employee is Found with ID = "<<id1<<".\n";
        }
    }
    void Display_all()
    {
        cout<<"\nDetails of all "<<n<<" Employees :-\n";
        for(int i=0;i<n;i++)
        {
            cout<<"\nEmployee "<<i+1<<" Name : "<<nm[i];
            cout<<"\nEmployee "<<i+1<<" ID : "<<id[i];
            cout<<"\nEmployee "<<i+1<<" Salary : "<<salary[i];
            cout<<"\n\n--------------------------\n"; 
        }
    }
    void Display_gtsalary()
    {
        int salary1,flag=0;
        cout<<"\nEnter a salary : ";
        cin>>salary1;
        for(int i=0;i<n;i++)
        {
            if(salary[i]>salary1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
        cout<<"\nDetails of Employees having Salary > "<<salary1<<" :-\n";
        for(int i=0;i<n;i++)
        {
            if(salary[i]>salary1)
            {
            cout<<"\nEmployee "<<i+1<<" Name : "<<nm[i];
            cout<<"\nEmployee "<<i+1<<" ID : "<<id[i];
            cout<<"\nEmployee "<<i+1<<" Salary : "<<salary[i];
            cout<<"\n\n--------------------------\n"; 
            }
        }
        }
        else
        {
            cout<<"\nNo Employee Found having Salary > "<<salary1<<".\n";
        }
    }
    void Display_maxsalary()
    {
       int max_sal;
       max_sal=salary[0]; 
       for(int i=1;i<n;i++)
        {
            if(salary[i]>max_sal)
            {
                max_sal=salary[i];
            }
        }
        for(int j=0;j<n;j++)
        {
            if(salary[j]==max_sal)
            {
            cout<<"\nEmployee having Maximum Salary:-\n";
            cout<<"\nEmployee "<<i+1<<" Name : "<<nm[j];
            cout<<"\nEmployee "<<i+1<<" ID : "<<id[j];
            cout<<"\nEmployee "<<i+1<<" Salary : "<<salary[j];
            cout<<"\n\n--------------------------\n"; 
            }
        } 
    }
};
int main()
{
    employee e;
    e.in();
    while (1)
    {
        int choice;
        cout << "\n\n1.Search by Name.\n";
        cout << "2.Search by ID.\n";
        cout << "3.Display All Employee Details.\n";
        cout << "4.Display all Employees having Salary greater than a specific salary.\n";
        cout << "5.Display Employee having Maximum Salary.\n";
        cout << "6.Exit the Program.\n\n";
        cout << "Enter Your Choice : ";
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
            e.search_nm();
            break;
        case 2:
            e.search_id();
            break;
        case 3:
            e.Display_all();
            break;
        case 4:
            e.Display_gtsalary();
            break;
        case 5:
            e.Display_maxsalary();
            break;
        case 6:
            exit(1);
        default:
            cout << "\n\nInvalid Choice. Please enter from 1 to 6 ONLY.\n\n";
            break;
        }
    }
    return 0;
}