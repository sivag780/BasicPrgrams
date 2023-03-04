#include <iostream>

using namespace std;
class A
{
    int a;
    int b;
public:
    A()
    {
        a=10;
        b=20;
    }
    void display()
    {
        cout<<"a value is:"<<a<<endl;
        cout<<"b value is:"<<b<<endl;
    }
    A operator +(A tobj1)
    {
        A tobj2;
        tobj2.a=a+tobj1.a;
        tobj2.b=b+tobj1.b;
        return tobj2;


    }
};

int main()
{
    A obj1;
    obj1.display();
    A obj2;
    obj2.display();
    A obj3=obj1+obj2;
    obj3.display();
    return 0;
}
