#include<iostream>
using namespace std;
class area
{
    protected:
    float r;
};
class volume:protected area
{
    float h;
    public:
    void in()
    {
        cout<<"Enter Radius of Cylinder : ";
        cin>>r;
        cout<<"Enter Height of Cylinder : ";
        cin>>h;
    }
    void show()
    {
        cout<<"Surface area of cylinder = "<<(2*3.14*r*r)+(2*3.14*r*h);
    }
};
int main()
{
    volume obj;
    obj.in();
    obj.show();
    return 0;
}