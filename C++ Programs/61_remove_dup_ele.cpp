#include<iostream>
using namespace std;
class array
{
    int ar[100],n;
    public:
    void in()
    {
        cout<<"Enter numbers of element you want to enter : ";
        cin>>n;
        cout<<"Enter "<<n<<" Elements in the Array : ";
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;)
            {
                if(ar[j]==ar[i])
                {
                    for(int k=j;k<n-1;k++)
                    {
                        ar[k]=ar[k+1];
                    }
                    n--;
                }
                else
                {
                    j++;
                }
            }
        }
    }
    void show()
    {
        cout<<"Array after removing duplicate elements :-\n";
        for(int i=0;i<n;i++)
        {
            cout<<ar[i]<<"   ";
        }
    }
};
int main()
{
    array a;
    a.in();
    a.show();
    return 0;
}