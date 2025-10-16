#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    unsigned char   ch;

    i = ft_strlen(s);
    ch = (unsigned char) c;
    if (ch == '\0')
        return ((char *) &s[i]);
    i--;
    while (i >= 0)
    {
        if (s[i] == ch)
            return ((char *) &s[i]);
        i--;
    }
    return (NULL);
}