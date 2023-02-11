#include <iostream>

using namespace std;


class student
{
public:
    string name;
    int rollno;
    char sec;
    float percent;

    void give_details( string a,int b,char c,float d);

    void display()
    {

        cout<<"Name of the student is :"<<name<<endl;

        cout<<"RollNo of the student is :"<<rollno<<endl;

        cout<<"Section of the student is :"<<sec<<endl;

        cout<<"Percentage of the student is :"<<percent<<endl;


    }


};
void student :: give_details(string a,int b,char c,float d)
    {
        name = a;
        rollno = b;
        sec = c;
        percent = d;

    }


int main()
{
    student report;
    report.give_details("JACK",143,'A',89.99);
    report.display();
    report.name="MIKE";
    report.rollno=108;
    report.sec='B';
    report.percent=99.99;
    report.display();


    return 0;
}
