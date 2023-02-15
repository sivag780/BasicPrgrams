#include<iostream>
using namespace std;

class A
{
    int a,b;
public:
    A()
    {
        cout<<"Class A Ctor"<<endl;
        a=10;
        b=20;
    }
    ~A()
    {
        cout<<"Class A Dtor"<<endl;
    }
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
};
class B:public A
{
    int c,d;
public:
     B()
    {
        cout<<"Class B Ctor"<<endl;
        c=11;
        d=22;
    }
    ~B()
    {
        cout<<"Class B Dtor"<<endl;
    }
    void display()
    {
        cout<<c<<" "<<d<<endl;
    }
};
int main()
{
    B obj;
    obj.display();

    return 0;
}


