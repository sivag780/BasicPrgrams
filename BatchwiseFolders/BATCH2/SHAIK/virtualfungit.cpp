#include <iostream>

using namespace std;

class A
{
public:

  virtual void display()
    {
        cout<<"class A display"<<endl;
    }
};
class B : public A
{
public:
    void display()
    {
        cout<<" class B display"<<endl;
    }
};
int main()
{
    A *ptr;
    B objB;
    ptr =&objB;
    ptr->display();
}
