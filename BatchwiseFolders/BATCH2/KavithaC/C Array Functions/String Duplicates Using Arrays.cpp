#include <stdio.h>

int main()
{
    char s[] = "Hello!World";
    int c[256] = {0};
    int i = 0;
    while (s[i] != '\0')
    {
        c[(int) s[i]]++;
        i++;
    }
    printf("Duplicate characters in the string: ");
    for (i = 0; i < 256; i++)
    {
        if (c[i] > 1)
        {
            printf("%c ", i);
        }
    }
    printf("\n");
    return 0;
}

