#include<stdio.h>

struct dob
{
    int d;
    int m;
    int y;
};

struct emp
{
    int id;
    char dpt;
    float sal;
    struct dob DOB;
};

int main()
{
    struct emp E={10,'A',50000.0,{12,12,2022}};

    printf("%d %c %f %d %d %d \n", E.id, E.dpt, E.sal, E.DOB.d, E.DOB.m, E.DOB.y);

    return 0;
}


