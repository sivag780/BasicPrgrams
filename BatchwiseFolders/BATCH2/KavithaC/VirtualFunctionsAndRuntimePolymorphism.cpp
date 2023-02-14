
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
        a=10;
        b=20;
        x=30;
        y=40;
    }
    virtual void display()
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
        c=11;
        d=22;
        p=33;
        q=44;
    }
private:
    void display()  //Even if we mention Access specifiers as Private or protected also it wont give error, because in runtime Access specfiers not considered.
    {
        cout<<c<<" "<<d<<" "<<p<<" "<<q<<endl;
    }
};
int main()
{
    A *ptr;
    B obj;
    ptr=&obj;
    ptr->display();

    return 0;
}

