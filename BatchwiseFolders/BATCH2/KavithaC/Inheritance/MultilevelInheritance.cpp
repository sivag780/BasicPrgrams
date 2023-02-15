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
class C:public B
{
    int e,f;
protected:
    int m,n;
public:
    C()
    {
        cout<<"Class C Ctor"<<endl;
    }
    void Assign()
    {
        e=101;
        f=202;
        m=303;
        n=404;
    }
    void display()
    {
        cout<<e<<" "<<f<<" "<<m<<" "<<n<<endl;
    }
};
int main()
{
    C obj;
    obj.Assign();
    obj.display();

    cout<<endl;

    B obj1;
    obj1.Assign();
    obj1.display();

     cout<<endl;

    A obj2;
    obj2.Assign();
    obj2.display();

    return 0;
}



