#include<iostream>
using namespace std;
class details
{
    protected:
    int n,cost[100],i;
    string title[100],author[100],publisher[100];
};
class books:private details
{
    public:
    void in()
    {
        cout<<"\nEnter no. of Books : ";
        cin>>n;
        cin.ignore();
        if(n<=0)
        {
            cout<<"\nInvalid no. of Books.\n";
            return;
        }
        cout<<"\n\nEnter Details of "<<n<<" Books :-\n";
        for(i=0;i<n;i++)
        {
            int flag=0;
            while(flag==0)
            {
                cout<<"\nEnter Book "<<i+1<<" Title : ";
                getline(cin,title[i]);
                int duplicate=0;
                for(int j=0;j<i;j++)
                {
                    if(title[i]==title[j])
                    {
                        cout<<"\nA Book with this title has already been published.\n";
                        duplicate=1;
                        break;
                    }
                }
                if(duplicate==0)
                {
                    flag=1;
                }
            }
            cout<<"Enter Author Name of Book "<<i+1<<" : ";
            getline(cin,author[i]);
            cout<<"Enter Publisher name of Book "<<i+1<<" : ";
            getline(cin,publisher[i]);
            cout<<"Enter Cost of Book "<<i+1<<" : ";
            cin>>cost[i];
            cin.ignore();
        }
    }
    void search_auth()
    {
        string auth;
        int flag=0,flag2=0,i;
        cout<<"Enter an Author Name : ";
        getline(cin,auth);
        for(int i=0;i<n;i++)
        {
            if(author[i]==auth)
            {
                flag2=1;
                break;
            }
        }
        if(flag2==1)
        {
        cout<<"\nDetails of Books by Author Name = "<<auth<<" :-\n";
        for(i=0;i<n;i++)
        {
            if(author[i]==auth)
            {
                flag=1;
                cout<<"\nBook Accession Number : "<<i+1;
                cout<<"\nBook Title : "<<title[i];
                cout<<"\nAuthor Name : "<<author[i];
                cout<<"\nPublisher Name : "<<publisher[i];
                cout<<"\n---------------------------\n";
            }
        }
        }
        if(flag==0)
        {
            cout<<"No Book is available by Author Name : "<<auth<<",\n";
        }
    }
    void search_publ()
    {
        string publ;
        int i,flag=0,flag2=0;
        cout<<"Enter a Publisher Name : ";
        getline(cin,publ);
    }
};
int main()
{
    books b;
    b.in();
    b.search_auth();
    return 0;
}