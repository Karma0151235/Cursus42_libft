/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:04:55 by stee              #+#    #+#             */
/*   Updated: 2025/10/17 11:07:09 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
        char    *sub;
        size_t  i;
        size_t  s_len;

        if (s == NULL)
                return (NULL);
        i = 0;
        s_len = ft_strlen(s);
        if (start >= s_len)
                return (ft_strdup(""));
        if (len > (s_len - start))
                len = s_len - start;
        sub = (char *) malloc(sizeof(char) * (len + 1));
        if (sub == NULL)
                return (NULL);
        while (s[start + i] != '\0' && i < len)
        {
                sub[i] = s[start + i];
                i++;
        }
        sub[i] = '\0';
        return (sub);
}
