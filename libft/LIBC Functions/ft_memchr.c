#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned const char *p;
    unsigned char ch;

    p = (unsigned const char *) s;
    ch = (unsigned char) c;
    while (n--)
    {
        if (*p == ch)
            return ((void *) p);
        p++;
    }
    return (NULL);
}