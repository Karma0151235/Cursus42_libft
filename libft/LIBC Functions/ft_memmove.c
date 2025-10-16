#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *dptr;
    const unsigned char *sptr;

    if (dest == NULL && src == NULL)
        return (NULL);
    dptr = (unsigned char *)dest;
    sptr = (const unsigned char *)src;
    if (dptr < sptr)
    {
        while (n--)
            *dptr++ = *sptr++;
    }
    else
    {
        d += n;
        s += n;
        while (n--)
            *--dptr = *--sptr;
    }
    return (dest);
}