
#include<iostream>
using namespace std;

class A
{
    int a,b;
public:
    A()
    {
        cout<<"Class A Ctor"<<endl;
    }
    ~A()
    {
        cout<<"Class A Dtor"<<endl;
    }
    void setvalues(int x, int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    A obj;
    obj.setvalues(5,10);
    obj.display();

    return 0;
}


