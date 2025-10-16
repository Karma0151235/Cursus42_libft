#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr;
    unsigned char ch;

    ptr = (unsigned char *)s;
    ch = (unsigned char)c;
    while (n--)
        *ptr++ = ch;
    return (s);
}