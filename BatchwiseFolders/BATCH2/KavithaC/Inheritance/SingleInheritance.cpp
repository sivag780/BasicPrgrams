#include<iostream>
using namespace std;

class A
{
    int a,b;
protected:
    int x,y;
public:
    A()
    {
        cout<<"Class A Ctor"<<endl;
    }
    void Assign()
    {
        a=10;
        b=20;
        x=30;
        y=40;
    }
    void display()
    {
        cout<<a<<" "<<b<<" "<<x<<" "<<y<<endl;
    }
};
class B:public A
{
    int c,d;
protected:
    int p,q;
public:
     B()
    {
        cout<<"Class B Ctor"<<endl;
    }
    void Assign()
    {
        c=11;
        d=22;
        p=33;
        q=44;
    }
    void display()
    {
        cout<<c<<" "<<d<<" "<<p<<" "<<q<<endl;
    }
};
int main()
{
    B obj;
    obj.Assign();
    obj.display();

    cout<<endl;

    A obj1;
    obj1.Assign();
    obj1.display();

    return 0;
}

