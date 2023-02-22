
#include<iostream>
using namespace std;

class A
{
public:
    int a,b;
    char c;

    A()
    {
        a=100;
        b=200;
        c='A';
    }
    void display()
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    void display(int x, char z)
    {
        a=x;
        c=z;
        cout<<a<<" "<<c<<endl;
    }
    char display(char z)
    {
        c=z;
        cout<<c<<endl;
    }
    int display(int y, int x)
    {
        a=x;
        b=y;
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    A obj;
    obj.display();

    obj.a=11;
    obj.b=22;
    obj.c='B';

    cout<<endl;
    obj.display();

    cout<<endl;
    obj.display(10,'K');

    cout<<endl;
    obj.display(44,33);

    cout<<endl;
    obj.display('C');

    return 0;
}


