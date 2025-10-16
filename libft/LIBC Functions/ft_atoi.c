#include "libft.h"

int ft_atoi(const char *nptr)
{
    int sum;
    int sign;
    int i;

    sum = 0;
    sign = 1;
    i = 0;
    while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if (nptr[i] == '+' || nptr[i] == '-')
    {
        if (nptr[i] == '-')
            sign *= -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        sum = (sum * 10) + (nptr[i] - '0');
        i++;
    }
    return (sum * sign);
}