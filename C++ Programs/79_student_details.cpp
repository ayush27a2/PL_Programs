#include <iostream>
#include <iomanip>
using namespace std;
class student
{
    int roll[100], m1[100], m2[100], m3[100], n, r2,i;
    string nm[100];
    string s;
    float per[100];

public:
    void in()
    {
        cout << "Enter no. of Student : ";
        cin >> n;
        if (n <= 0)
        {
            cout << "Invalid number of Students. n should be greater than 0.";
            exit(1);
        }
        else
        {
            cin.ignore();
            cout << "Enter Details of " << n << " Students : \n\n";
            for (i = 0; i < n; i++)
            {
                cout << "Enter name of Student " << i + 1 << " : ";
                getline(cin,nm[i]);

                int flag = 0;
                while (flag == 0)
                {
                    cout << "Enter Roll no. of Student " << i + 1 << " (Must be unique) : ";
                    cin >> roll[i];
                    int duplicate=0;
                    for (int j = 0; j < i; j++)
                    {
                        if (roll[i] == roll[j])
                        {
                            cout << "\nThis Roll no. already exits (roll must be unique).\n";
                            duplicate = 1;
                            break;
                        }
                    }
                    if (duplicate == 0)
                    {
                        flag = 1;
                    }
                }
                cout << "Enter Marks of 3 Subject for Student " << i + 1 << " (sperate marks with space) : ";
                cin >> m1[i] >> m2[i] >> m3[i];
                cin.ignore();
                per[i] = (m1[i] + m2[i] + m3[i]) / 3.0;
                cout << "\n";
            }
        }
    }
    void search()
    {
        int i, flag = 0,flag2=0;
        cout << "Enter Details of Student to search :-\n";
        cout << "Enter name of Student : ";
        getline(cin, s);
        cout << "\nEnter Roll no. of Student (Must be Unique) : ";
        cin >> r2;
        for(int i=0;i<n;i++)
        {
            if(nm[i]==s&&roll[i]==r2)
            {
                flag2=1;
                break;
            }
        }
        if(flag2==1)
        {
        cout << "\n\nDetails of Student :-\n\n";
        for (i = 0; i < n; i++)
        {
            if (nm[i] == s && roll[i] == r2)
            {
                flag = 1;
                cout << "Name of Student = " << nm[i];
                cout << "\nRoll No. = " << roll[i];
                cout << "\nMarks of 3 Subject = " << m1[i] << " " << m2[i] << " " << m3[i];
                cout << "\nPercentage of Marks = " << fixed << setprecision(2) << per[i] << "%";
            }
        }
        }
        if (flag == 0)
        {
            cout << "\nNo Student with such details found.";
        }
    }
    void modify()
    {
        int flag = 0, i, up, newroll, newm1, newm2, newm3;
        string newname;
        cout << "Enter Student's Roll No. to Modify : ";
        cin >> r2;
        cin.ignore();
        for (i = 0; i < n; i++)
        {
            if (roll[i] == r2)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "Current Details of Student :-\n\n";
            cout << "Name of Student = " << nm[i];
            cout << "\nRoll No. = " << roll[i];
            cout << "\nMarks of 3 Subject = " << m1[i] << " " << m2[i] << " " << m3[i];
            cout << "\nPercentage of Marks = " << fixed << setprecision(2) << per[i] << "%";
            cout << "\n\n";
            cout << "What do you want to modify? :-\n";
            cout << "Enter 1 for Name.\n";
            cout << "Enter 2 for Roll : \n";
            cout << "Enter 3 for Marks : \n";
            cout << "Enter 4 for exit.\n";
            cin >> up;
            switch (up)
            {
            case 1:
                cout << "Enter New Name : ";
                cin >> newname;
                nm[i] = newname;
                cout << "Name has been updated successfully.\n\n";
                cout << "\nUpdated Details of Student :-\n\n";
                cout << "Name of Student = " << nm[i];
                cout << "\nRoll No. = " << roll[i];
                cout << "\nMarks of 3 Subject = " << m1[i] << " " << m2[i] << " " << m3[i];
                cout << "\nPercentage of Marks = " << fixed << setprecision(2) << per[i] << "%";
                break;
            case 2:
                cout << "Enter New Roll No. : ";
                cin >> newroll;
                for (int j = 0; j < n; j++)
                {
                    if (roll[j] == newroll)
                    {
                        cout << "This Roll no. is already assigned to another student";
                        return;
                    }
                }
                roll[i] = newroll;
                cout << "Roll No. has been updated successfully.\n\n";
                cout << "\nUpdated Details of Student :-\n\n";
                cout << "Name of Student = " << nm[i];
                cout << "\nRoll No. = " << roll[i];
                cout << "\nMarks of 3 Subject = " << m1[i] << " " << m2[i] << " " << m3[i];
                cout << "\nPercentage of Marks = " << fixed << setprecision(2) << per[i] << "%";
                break;
            case 3:
                cout << "Enter New marks of 3 subjects : ";
                cin >> newm1 >> newm2 >> newm3;
                m1[i] = newm1;
                m2[i] = newm2;
                m3[i] = newm3;
                cout << "Marks has been updated successfully.\n\n";
                cout << "\nUpdated Details of Student :-\n\n";
                cout << "Name of Student = " << nm[i];
                cout << "\nRoll No. = " << roll[i];
                cout << "\nMarks of 3 Subject = " << m1[i] << " " << m2[i] << " " << m3[i];
                per[i] = (m1[i] + m2[i] + m3[i]) / 3.0;
                cout << "\nPercentage of Marks = " << fixed << setprecision(2) << per[i] << "%";
                break;
            case 4:
                break;
            default:
                cout << "\nInvalid Choice. Please Enter from 1-4 ONLY.\n";
                break;
            }
        }
        else
        {
            cout << "Student with Roll No. : " << r2 << " is not found.\n";
        }
    }
    void all_details()
    {
        cout << "Details of All Student are :-\n\n";
        for (int i = 0; i < n; i++)
        {
            cout << "Name of Student = " << nm[i];
            cout << "\nRoll No. = " << roll[i];
            cout << "\nMarks of 3 Subject = " << m1[i] << " " << m2[i] << " " << m3[i];
            cout << "\nPercentage of Marks = " << fixed << setprecision(2) << per[i] << "%";
            cout << "\n\n-------------------------\n\n";
        }
    }
    void greater_per()
    {
        float per_compare;
        int flag=0;
        cout << "Enter Percentage (exclude % or /100) : ";
        cin >> per_compare;
        for(int i=0;i<n;i++)
        {
            if(per[i]>per_compare)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
        cout << "\nDetails of Students having percentage > " << per_compare << "% :-";
        for (int i = 0; i < n; i++)
        {
            if (per[i] > per_compare)
            {
                cout << "\n\nName of Student = " << nm[i];
                cout << "\nRoll No. = " << roll[i];
                cout << "\nMarks of 3 Subject = " << m1[i] << " " << m2[i] << " " << m3[i];
                cout << "\nPercentage of Marks = " << fixed << setprecision(2) << per[i] << "%";
            }
        }
        }
        else
        {
            cout<<"\nNo Student Found having percentage > "<<per_compare<<"%.\n";
        }
    }
    void max_per()
    {
        int i;
        float max_percentage = per[0];
        for (i = 1; i < n; i++)
        {
            if (per[i] > max_percentage)
            {
                max_percentage = per[i];
            }
        }
        cout << "\nDetails of Student having Maximum Percentage :-\n";
        for (int j = 0; j < n; j++)
        {
            if (per[j] == max_percentage)
            {
                cout << "\n\nName of Student = " << nm[j];
                cout << "\nRoll No. = " << roll[j];
                cout << "\nMarks of 3 Subject = " << m1[j] << " " << m2[j] << " " << m3[j];
                cout << "\nPercentage of Marks = " << fixed << setprecision(2) << per[j] << "%";
            }
        }
    }
};
int main()
{
    student s;
    s.in();
    while (1)
    {
        int choice;
        cout << "\n\n1.Search Student.\n";
        cout << "2.Modify Student Details.\n";
        cout << "3.Display All Student Details.\n";
        cout << "4.Display all student having percentage greater than a specific %.\n";
        cout << "5.Display student having maximum percentage.\n";
        cout << "6.Exit the Program.\n\n";
        cout << "Enter Your Choice : ";
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
            s.search();
            break;
        case 2:
            s.modify();
            break;
        case 3:
            s.all_details();
            break;
        case 4:
            s.greater_per();
            break;
        case 5:
            s.max_per();
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