#include<stdio.h>

struct emp
{
	int id;
    char dpt;
    float sal;
}G={20,'G',20000.0};

int main()
{
    struct emp E = {15,'C',10000.0};
    printf("E Details: \n");
    printf("%d %c %f \n", E.id, E.dpt, E.sal);

    printf("G details: \n");
    printf("%d %c %f \n", G.id, G.dpt, G.sal);

    G.id=10;
    G.dpt='B';
    G.sal=50000.0;

    printf("G details After update: \n");
    printf("%d %c %f \n", G.id, G.dpt, G.sal);

	return 0;
}
