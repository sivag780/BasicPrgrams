#include <stdio.h>
#include <stdlib.h>

struct student
{
    int rollno;
    char sec;
    float percent;

};
struct student fun();
int display(struct student);


int main()
{
    struct student jack ={143,'A',72.00};
    display(jack);
    struct student peter  ={159,'B',89.00};
    display(peter);
    fun();
}
struct student fun()
{
     struct student mike  ={123,'B',79.00};
     display(mike);
};

int display(struct student y)
{
    printf("roll number : %d\nsection : %c\npercentage :%f\n\n",y.rollno,y.sec,y.percent);
}

