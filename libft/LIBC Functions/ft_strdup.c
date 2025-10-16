#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t len;
    size_t i;
    char    *dup;

    if (s == NULL)
        return (NULL);
    len = ft_strlen(s);
    i = 0;
    dup = (char *) malloc(sizeof(char) * (len + 1));
    if (dup == NULL)
        return (NULL);
    while (s[i] != '\0')
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}