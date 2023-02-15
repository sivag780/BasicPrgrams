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
class B
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
class C:public A,B
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
class D:public C
{
    int g,h;
protected:
    int r,s;
public:
    D()
    {
        cout<<"Class D Ctor"<<endl;
    }
    void Assign()
    {
        g=121;
        h=222;
        r=323;
        s=424;
    }
    void display()
    {
        cout<<g<<" "<<h<<" "<<r<<" "<<s<<endl;
    }
};

int main()
{
    D obj;
    obj.Assign();
    obj.display();

    cout<<endl;

    C obj1;
    obj1.Assign();
    obj1.display();

    cout<<endl;

    B obj2;
    obj2.Assign();
    obj2.display();

    cout<<endl;

    A obj3;
    obj3.Assign();
    obj3.display();

    return 0;
}

