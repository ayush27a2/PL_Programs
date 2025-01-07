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
    void symmetric()
    {
        cout<<"\nTranspose of Matrix is :-\n";
        for(int i=0;i<n;i++) 
        {
            for(int j=0;j<n;j++)
            {
                cout<<matrix[j][i]<<"  ";
            }
            cout<<"\n";
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(temp[j][i]!=matrix[i][j])
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"\nIt is a Symmetric Matrix.\n";
        }
        else
        {
            cout<<"\nIt is NOT a Symmetric Matrix.\n";
        }
    }
    void trace()
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    sum = sum + matrix[i][j];
                }
            }
        } 
        cout<<"\nTrace of Above Matrix is matrix[1][1]+matrix[2][2]+matrix[3][3]....+matrix[n][n] = "<<sum;
    }
    void up_tri_mat()
    {
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i>j)
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
            cout<<"\nIt is an Upper Triangular Matrix.\n";
        }
        else
        {
            cout<<"\nIt is NOT an Upper Triangular Matrix.\n";   
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
    cout<<"\n1.Check if the matrix is symmetric.\n";
    cout<<"\n2.Display the trace of the matrix (sum of diagonal elements).\n";
    cout<<"\n3.Check if the matrix is an upper triangular matrix.\n";
    cout<<"\n\nEnter Your Choice (1-3) : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        m.symmetric();
        break;
        case 2:
        m.trace();
        break;
        case 3:
        m.up_tri_mat();
        break;
        default:
        cout<<"\nInvalid Choice.Please enter a choice between 1, 2 and 3.\n";
    }
    cout<<"\nDo you want to continue the loop? press y/Y or n/N : ";
    cin>>continue_ch;
    }while(continue_ch=='y'||continue_ch=='Y');
    return 0;
}