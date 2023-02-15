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
        a=10;
        b=20;
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

     A obj_a=obj;
     obj_a.show();

     return 0;
 }



