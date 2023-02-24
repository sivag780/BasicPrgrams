#include <stdio.h>

// Convert a string to an integer
int main()
{
    char *str="-123";
    int result = 0;
    int sign = 1;
    int i = 0;

    // Skip leading whitespace
    while (str[i] == ' ')
    {
        i++;
    }

    // Handle optional sign
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }

    // Convert remaining digits
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}

