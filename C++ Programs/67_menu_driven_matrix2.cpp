#include<iostream>
using namespace std;
class mat_menu
{
    int n,matrix[20][20],temp[20][20];
    public:
    void in()
    {
        cout<<"Enter a value for Rows and Columns of a SQUARE Matrix : ";
        cin>>n;
        cout<<"Enter Elements in the "<<n<<"x"<<n<<" SQUARE Matrix : ";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>matrix[i][j];
                temp[i][j]=matrix[i][j];
            }
        }
        cout<<"\nMatrix is :-\n";
        for(int i=0;i<n;i++) 
        {
            for(int j=0;j<n;j++)
            {
                cout<<matrix[i][j]<<"  ";
            }
            cout<<"\n";
        }
    }
    void low_tri_mat()
    {
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j>i)
                {
                    if(matrix[i][j]!=0)
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==0)
        {
            cout<<"\nIt is a Lower Triangular Matrix.\n";
        }
        else
        {
            cout<<"\nIt is NOT a Lower Triangular Matrix.\n";   
        }
    }
    void identity_mat()
    {
        int flag1=0,flag2=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    if(matrix[i][j]!=1)
                    {
                        flag1=1;
                        break;
                    }
                }
                else
                {
                    if(matrix[i][j]!=0)
                    {
                        flag2=1;
                        break;
                    }
                }
            }
        }
        if(flag1==0&&flag2==0)
        {
            cout<<"\nIt is an Identity Matrix.\n";
        }
        else
        {
            cout<<"\nIt is NOT an Identity Matrix.\n";
        }
    }
};
int main()
{
    mat_menu m;
    int choice;
    char continue_ch;
    m.in();
    do
    {
    cout<<"\n1.Check if the matrix is a lower triangular matrix.\n";
    cout<<"\n2.Check if it is an identity matrix.\n";
    cout<<"\n\nEnter Your Choice (1-3) : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        m.low_tri_mat();
        break;
        case 2:
        m.identity_mat();
        break;
        default:
        cout<<"\nInvalid Choice.Please enter a choice between 1, 2 and 3.\n";
        break;
    }
    cout<<"\nDo you want to continue the loop? press y/Y or n/N : ";
    cin>>continue_ch;
    }while(continue_ch=='y'||continue_ch=='Y');
    return 0;
}