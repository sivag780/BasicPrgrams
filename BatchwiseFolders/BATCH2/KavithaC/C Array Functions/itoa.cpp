#include<stdio.h>

int main()

{
    char str[20];
    int n = -2023;
    int i = 0;
    int sign = 1;

    // Handle negative numbers
    if (n < 0)
    {
        sign = -1;
        n = -n;
    }

    // Convert each digit to a character in reverse order
    do
    {
        str[i++] = n % 10 + '0';
        n /= 10;
    } while (n > 0);

    // Add sign if necessary
    if (sign < 0)
    {
        str[i++] = '-';
    }

    // Reverse the string
    for (int j = 0; j < i / 2; j++)
    {
        char temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }

    // Add null terminator
    str[i] = '\0';
    printf("%s",str);

    return 0;
}

