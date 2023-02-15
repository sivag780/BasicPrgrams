#include<iostream>
using namespace std;

 class A
 {
 protected:
    int a,b;
 public:
     A(int x, int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }

 };
 int main()
 {
     A obj(10,20);
     obj.show();

     return 0;
 }

