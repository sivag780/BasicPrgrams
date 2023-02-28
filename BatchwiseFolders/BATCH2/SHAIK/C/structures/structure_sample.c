#include <stdio.h>
#include <stdlib.h>

struct student
{
    int rollno;
    char sec;
    float percent;
};
int main()
{
    struct student jack ={143,'A',99.99};  //GROUP INITIALIZATION
    printf("rollno :%d\nsection :%c\npercentage :%f\n\n\n",jack.rollno,jack.sec,jack.percent);

    struct student mike ={123,'B',69.98};
    printf("rollno :%d\nsection :%c\npercentage :%f\n\n\n",mike.rollno,mike.sec,mike.percent);

    struct student peter;   //INDUVIDUAL INITIALIZATION
    peter.rollno = 132;
    peter.sec = 'C';
    peter.percent = 96;
    printf("rollno :%d\nsection :%c\npercentage :%f",peter.rollno,peter.sec,peter.percent);


}
