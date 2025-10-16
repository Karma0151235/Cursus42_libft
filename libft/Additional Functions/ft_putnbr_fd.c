#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    long long LL;

    LL = n;
    if (LL < 0)
    {
        ft_putchar_fd('-', fd);
        LL *= -1;
    }
    if (LL >= 10)
    {
        ft_putnbr_fd(LL / 10, fd);
        ft_putchar_fd(((LL % 10) + '0'), fd)
    }
    else
    {
        ft_putchar_fd((LL + '0'), fd);
    }
}