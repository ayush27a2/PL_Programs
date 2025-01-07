#include<iostream>
using namespace std;
class transpose
{
    int m,n;
    int A[20][20];
    int B[20][20];  
    public:
    void matrix_A()
    {
        cout<<"Enter Rows and Columns : ";
        cin>>m>>n;
        cout<<"Enter Elements of Matrix :-\n";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>A[i][j];
                B[i][j]=A[i][j];
            }
        }
        cout<<"\nMatrix A is :-\n";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<A[i][j]<<"  ";
            }
            cout<<"\n";
        }
    }
    void matrix_B()
    {
        cout<<"\nTranspose of Matrix A is :-\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<B[j][i]<<"  ";
            }
            cout<<"\n";
        }
    }
};
int main()
{
    transpose t;
    t.matrix_A();
    t.matrix_B();
    return 0;
}