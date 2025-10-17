/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:09:53 by stee              #+#    #+#             */
/*   Updated: 2025/10/17 11:31:16 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t   ft_count_words(char const *s, char c)
{
        size_t  i;
        size_t  ct;

        if (!s || !c)
                return (0);
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

static char     *ft_mallocword(char const *s, char c)
{
        char    *word;
        size_t  i;
        size_t  j;

        start = s;
        i = 0;
        j = 0;
        while (s[i] != c && s[i] != '\0')
                i++;
        word = (char *) malloc(sizeof(char) * (i + 1));
        if (word == NULL)
                return (NULL);
        while (j < i)
        {
                word[j] = s[j];
                j++;
        }
        word[j] = '\0';
        return (word);
}

char    **ft_split(char const *s, char c)
{
        char    **arr;
        char    *word;
        size_t  i;
        size_t  j;

        i = 0;
        j = 0;
        arr = (char **) malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
        if (arr == NULL || s == NULL || c == NULL)
                return (NULL);
        while (s[i] != '\0')
        {
                if (s[i] != c)
                {
                        arr[j] = ft_mallocword(&s[i], c);
                        while (s[i] != '\0' && s[i] != c)
                                i++;
                        j++;
                }
                else if (s[i] == c)
                        i++;
        }
        arr[j] = NULL;
        return (arr);
}
