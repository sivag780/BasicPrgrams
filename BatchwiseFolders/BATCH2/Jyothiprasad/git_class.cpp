#include<iostream>
using namespace std;
class embedded
{
public:
	int batchno;
	char name;
	float fee;

	void learn(int x,char y,float z);
	void display()
	{
		cout<<"the batch no. is:"<<batchno<<endl;
		cout<<"the name is:"<<name<<endl;
		cout<<"the fee is:"<<fee<<endl;
	}
};
void embedded::learn(int x, char y, float z)
{
	batchno=x;
	name=y;
	fee=z;

}
void main()
{
	embedded obj;
	obj.batchno=26;
	obj.name='E';
	obj.fee=35000.00;
	obj.display();
}

