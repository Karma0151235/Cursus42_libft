#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  sum;
    size_t  dstlen;
    size_t  srclen;

    srclen = ft_strlen(src);
    dstlen = ft_strlen(dst);
    if (size > dstlen)
        sum = dstlen + srclen;
    else
        sum = srclen + size;
    i = 0;
    while (src[i] != '\0' && size > (dstlen + 1))
    {
        dst[dstlen] = src[i];
        dstlen++;
        i++;
    }
    dst[dstlen] = '\0';
    return (sum);
}