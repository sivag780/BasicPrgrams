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
     friend A operator +(A tobj1,A tobj2);
};
A operator +(A tobj1,A tobj2)
    {
        A tobj3;
        tobj3.a=tobj1.a+tobj2.a;
        tobj3.b=tobj1.b+tobj2.b;
        return tobj3;


    }

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
