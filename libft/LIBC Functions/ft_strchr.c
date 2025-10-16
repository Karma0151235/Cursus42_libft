#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;
    unsigned char ch;

    i = 0;
    ch = (unsigned char) c;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            return ((char *) &s[i]);
        i++;
    }
    if (c == '\0')
        return ((char *) &s[i]);
    return (NULL);
}