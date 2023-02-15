
#include<iostream>
using namespace std;

class A
{
public:
    int a,b;
    A()
    {
        cout<<"Class A Ctor Called"<<endl;
        a=10;
        b=20;
    }
    ~A()
    {
        cout<<"Class A Dtor Called"<<endl;
    }
    A(int x)
    {
        cout<<"Class A Ctor with 1 Parameter Called"<<endl;
        a=x;
        b=x;
    }
        A(int x, int y)
    {
        cout<<"Class A Ctor with 2 Parameter Called"<<endl;
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }
};

int main()
{
    A obj;
    obj.show();

    cout<<endl;
    A obj1(5,10);
    obj1.show();

    cout<<endl;
    A obj2(5);
    obj2.show();

    return 0;
}


