#include<iostream>
using namespace std;
class matrix
{
    int rows,cols,sum=0;
    public:
    void matRC_sum()
    {
        cout<<"Enter number of rows and columns : ";
        cin>>rows>>cols;
        int a[rows][cols];
        cout<<"Enter Elements of matrix : \n";
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"Matrix is :-\n";
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                cout<<a[i][j];
                cout<<"  ";
            }
            cout<<"\n";
        }
        cout<<"\nSum of Each Rows and Columns of above matrix are :-\n";
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                    sum=sum+a[i][j];
            }
            cout<<"\nSum of elements of row "<<i+1<<" = "<<sum;
            sum=0;
        }
        for(int i=0;i<cols;i++)
        {
            for(int j=0;j<rows;j++)
            {
                    sum=sum+a[j][i];
            }
            cout<<"\nSum of elements of Column "<<i+1<<" = "<<sum;
            sum=0;
        }
    }
};
int main()
{
    matrix m;
    m.matRC_sum();
    return 0;
}