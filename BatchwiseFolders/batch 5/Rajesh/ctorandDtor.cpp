/*#include<iostream>
#include<string>
using namespace std;
class employe
{
public:

	string name;
	int ID_no;
	char phone[10];
	float salary;
	public:
		employe();
		void disp_emp();
		~employe()
		{
		cout<<"employe dtor called"<<endl;
		}
};
class student:public employe
{ 
public :
	char course[30];
	float  fee;
	student();
	void disp_stu();
	~student()
	{
	cout<<"student dtor called"<<endl;
	}
};
employe::employe()
{
	cout<<"Enter employee details"<<endl;
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"Enter Id no :";
	cin>>ID_no;
	cout<<"phone number :";
	cin>>phone;
	cout<<"your salary :";
	cin>>salary;
}
void employe::disp_emp()
{
	cout<<"name:"<<name<<endl;
	cout<<"Id.no:"<<ID_no<<endl;
	cout<<"phone number:"<<phone<<endl;
	cout<<"salary:"<<salary<<endl;
}
student::student()
{
	cout<<"Enter student details"<<endl;
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"Enter Id no :";
	cin>>ID_no;
	cout<<"phone number :";
	cin>>phone;
	cout<<"Enter course: ";
	cin>>course;
	cout<<"Total fee:";
	cin>>fee;
}*/

/*void student::disp_stu()
{
disp_emp();
cout<<"course  name:"<<course<<endl;
	cout<<"Total fee:"<<fee<<endl;
}
int main ()
{
employe E1;
student S1;
cout<<"Employe details"<<endl;
E1.disp_emp();
cout<<"student details"<<endl;
S1.disp_stu();
//S1.disp_emp();
return 0;

}*/