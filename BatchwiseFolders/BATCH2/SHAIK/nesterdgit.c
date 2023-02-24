#include <stdio.h>
#include <stdlib.h>

/*struct student      //NESTERD STRUCTURE TYPE 1
{
    int rollno;
    char sec;
    float percent;
   struct dob
   {
    int DD;;
    int MM;
    int YY;
   }DOB;
};
int main()
{
    struct student jack ={143,'A',90,  {8,11,1995}};
    printf("rollno :%d\nsection :%c\npercentage :%f\nbirth day :%d\nbirth month :%d\nbirth year :%d",
           jack.rollno,jack.sec,jack.percent,jack.DOB.DD,jack.DOB.MM,jack.DOB.YY);

}*/





struct dob     //NESTERD STRUCTURE TYPE 2
   {
    int DD;;
    int MM;
    int YY;
   };
   struct student
{
    int rollno;
    char sec;
    float percent;
    struct dob DOB;
};

int main()
{
    struct student jack = {123,'B',74,8,11,1995};
    printf("rollno :%d\nsection :%c\npercentage :%f\nbirth day :%d\nbirth month :%d\nbirth year :%d\n\n\n",
           jack.rollno,jack.sec,jack.percent,jack.DOB.DD,jack.DOB.MM,jack.DOB.YY);



    struct student mike;

    mike.rollno = 152;
    mike.sec = 'C';
    mike.percent = 72;
    mike.DOB.DD = 11;
    mike.DOB.MM = 12;
    mike.DOB.YY = 1998;

    printf("rollno :%d\nsection :%c\npercentage :%f\nbirth day :%d\nbirth month :%d\nbirth year :%d",
           mike.rollno,mike.sec,mike.percent,mike.DOB.DD,mike.DOB.MM,mike.DOB.YY);

}
