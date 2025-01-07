#include<iostream>
using namespace std;
class frq
{
    int ar[25]={0},fq[25]={0},n;
    public:
    void in()
    {
        cout<<"Enter number of elements (within range 1 to 25) : ";
        cin>>n;
        while(n<0||n>25)
        {
            cout<<"Invalid Input. Enter again : ";
            cin>>n;
        }
        cout<<"\nEnter "<<n<<" Elements in the Array (value should be within range 1 to 25) : ";
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            while(ar[i]<1||ar[i]>25)
            {
                cout<<"Out of Range.\nEnter the value again : ";
                cin>>ar[i];
            }
            fq[ar[i]-1]++;
        }
    }
    void show()
    {
        for(int i=0;i<25;i++)
        {
            cout<<"\nThe frequency of occurrences of "<<(i+1)<<"'s is "<<fq[i];
        }
    }
};
int main()
{
    frq f;
    f.in();
    f.show();
    return 0;
}