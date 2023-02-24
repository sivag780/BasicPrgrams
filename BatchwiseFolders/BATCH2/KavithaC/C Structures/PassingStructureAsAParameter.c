#include<stdio.h>

struct emp
{
    int id;
    char dpt;
    float sal;
}G;

void disp(struct emp);

int main()
{
    struct emp E={10,'A',50000.0};
    disp(E);

    return 0;
}

void disp(struct emp X)
{
    printf("%d %c %f \n", X.id, X.dpt, X.sal);

    X.id=20;
    X.dpt='B';
    X.sal=10000.0;

    printf("After Overwrite: ");
    printf("%d %c %f \n", X.id, X.dpt, X.sal);
}

