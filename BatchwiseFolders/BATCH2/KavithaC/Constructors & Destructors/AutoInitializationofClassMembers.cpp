#include<iostream>
using namespace std;

class A
{
public:
    int a,b;

    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    A obj;
    obj.display();

    A obj1;
    obj1.display();

    A obj2;
    obj2.display();

    return 0;
}



