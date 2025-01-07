#include<iostream>
using namespace std;
class mat_sm
{
    int r1,c1,r2,c2;
    int A[20][20],B[20][20];
    int sum[20][20],mult[20][20]={0};
    public:
    void in()
    {
        cout<<"Enter Rows and Columns of Matrix A : ";
        cin>>r1>>c1;
        cout<<"\nEnter Elements of Matrix A : ";
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cin>>A[i][j];
            }
        }
        cout<<"\nEnter Rows and Columns of Matrix B : ";
        cin>>r2>>c2;
        cout<<"\nEnter Elements of Matrix B : ";
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                cin>>B[i][j];
            }
        }
        cout<<"\nMatrix A is :-\n";
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cout<<A[i][j]<<"  ";
            }
            cout<<"\n";
        }
        cout<<"\nMatrix B is :-\n";
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                cout<<B[i][j]<<"  ";
            }
            cout<<"\n";
        }
    }
    void add()
    {
        if(r1!=r2||c1!=c2)
        {
            return;
        }
        else
        {
            for(int i=0;i<r1;i++)
            {
            for(int j=0;j<c1;j++)
            {
                sum[i][j]=A[i][j]+B[i][j];
            }
            }
        }
    }
    void multiply()
    {
        if(c1!=r2)
        {
            return;
        }
        else
        {
            for(int i=0;i<r1;i++)
            {
            for(int j=0;j<c2;j++)
            {
                for (int k = 0; k < c1; k++)
                {
                    mult[i][j] = mult[i][j] + A[i][k] * B[k][j];
                }
            }
            }   
        }
    }
    void display()
    {
        if(r1!=r2||c1!=c2)
        {
            cout<<"\nAddition is Not Possible.Please enter same number rows and columns for both matrix.\n";
        }
        else
        {
        cout<<"\nSum of Matrix A and B is :-\n";
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cout<<sum[i][j]<<"  ";
            }
            cout<<"\n";
        }
        }
        if(c1!=r2)
        {
            cout<<"\nMultiplication is Not Possible.value of c1 and r2 must be same.\n";
        }
        else
        {
            cout<<"\nMultiplication of Matrix A and B is :-\n";
            for(int i=0;i<r1;i++)
            {
            for(int j=0;j<c2;j++)
            {
                cout<<mult[i][j]<<"  ";
            }
            cout<<"\n";
            }
        }
    }
};
int main()
{
    mat_sm m;
    m.in();
    m.add();
    m.multiply();
    m.display();
    return 0;
}