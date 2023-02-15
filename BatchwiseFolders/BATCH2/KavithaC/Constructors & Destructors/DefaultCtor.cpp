
#include<iostream>
using namespace std;

 class A
 {
 protected:
    int a,b;
 public:
    A()
    {
        cout<<"Class A Ctor"<<endl;
        a=5;
        b=10;
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

     return 0;
 }
