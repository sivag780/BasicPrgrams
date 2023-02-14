#include<iostream>
using namespace std;

class A
{
    public:
        int a,b;
        void setvalues(int x, int y)
        {
            a=x;
            b=y;
        }
        void display()
        {
           cout<<"a: "<<a<<endl;
           cout<<"b: "<<b<<endl;
        }
};
int main()
{
    A obj;
    obj.setvalues(5,10);
    obj.display();

    return 0;
}
