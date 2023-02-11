
#include <stdio.h>
 struct emp 
 {
     int id;
     char dept;
     float sal;
     
 };
void display(struct emp x );
int main()
{
    struct emp raja ={100,'A',9000.00};
 display(raja);
 printf("%d\n %c\n %f\n",raja.id,raja.dept,raja.sal);
}
 void display(struct emp x)
{

 struct emp likhi={101,'B',10000.00};
    printf("%d\n %c\n %f\n",likhi.id,likhi.dept,likhi.sal);
    
}