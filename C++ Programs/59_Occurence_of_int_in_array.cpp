#include<iostream>
using namespace std;
class occur
{
    int size,count=0;;
    public:
    int frq(int ar[100],int n)
    {
        cout<<"Enter number of elements : ";
        cin>>size;
        cout<<"Enter "<<size<<" Elements in the Array : ";
        for(int i=0;i<size;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<size;i++)
        {
            if(ar[i]==n)
            {
                count++;
            }
        }
        return count;
    }
};
int main()
{
    occur o;
    int array[100],k;
    cout<<"Enter an integer for which you want to count the occurrences : ";
    cin>>k;
    int occurence = o.frq(array,k);
    cout<<"The number "<<k<<" occurs "<<occurence <<" times in the Array.";
    return 0;
}