#include "libft.h"

static size_t ft_count_words(char const *s, char c)
{
    size_t i;
    size_t ct;

    i = 0;
    ct = 0;
    if (s[i] != c && s[i] != '\0')
        ct++;
    i++;
    while (s[i] != '\0')
    {
        if (s[i] != c && s[i - 1] == c)
            ct++;
        i++;
    }
    return (ct);
}

char *ft_mallocword(char const *s, char c)
{
    char *word;
    char *start;
    size_t j;
    size_t i;

    start = s;
    i = 0;
    j = 0;
    while (*s != c && *s != '\0')
    {
        s++;
        i++;
    }
    word = (char *)malloc(sizeof(char) * (i + 1));
    if (word == NULL)
        return (NULL);
    while (*start != c && *start != '\0')
    {
        word[j] = *start;
        j++;
        start++;
    }
    word[j] = '\0';
    return (word);
}

char **ft_split(char const *s, char c)
{
    char **arr;
    char *word;
    size_t words;
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    words = ft_count_words(s, c);
    arr = (char **)malloc(sizeof(char *) * (words + 1));
    if (arr == NULL)
        return (NULL);
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        if (s[i] == '\0')
            break;
        word = ft_mallocword(&s[i], c);
        if (word == NULL)
        {
            while (j > 0)
                free(arr[--j]);
            free(arr);
            return (NULL);
        }
        arr[j] = word;
        j++;
        while (s[i] != c && s[i] != '\0')
            i++;
    }
    arr[j] = NULL;
    return (arr);
}