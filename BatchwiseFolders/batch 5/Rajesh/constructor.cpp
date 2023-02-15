// USER DEFINED CONTRUCTORS 

#include<iostream>
#include<string>
using namespace std;
class pg   // class declaration
{int no_of_floor;
public:
	char B_name[20];
	int f_no;
	int r_no;
	int windows;

	pg()// user defined constructor 
	{
	//cout<<"number of floor is 4 in the building"<<endl;
	cout<<"Block name:";
	cin>>B_name; 
	cout<<"enter floor no: ";
	cin>>f_no;
	cout<<"enter the room :";
	cin>>r_no;
	cout<<"enter no of windows: ";
	cin>>windows;
	}
	
	void display();  //function declaration 
	
};
void pg ::display()   // accessing the function outside the class by scope operator
{
	cout<<"Welcome to pg"<<endl;
		cout<<"Block name is : "<<B_name<<endl;
		cout<<"floor no is : "<<f_no<<endl;
		cout<<"Room no is : "<<r_no<<endl;
		cout<<"Total windows in room : "<<windows<<endl;
}

int main()
{
pg P1,P2; // creating the intance or object 
P1.display();  //calling the function by object
P2.display();
}