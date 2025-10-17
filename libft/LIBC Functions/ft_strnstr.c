/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:53:56 by stee              #+#    #+#             */
/*   Updated: 2025/10/17 10:55:18 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
        size_t  i;
        size_t  j;

        i = 0;
        if (*little == '\0')
                return ((char *) big);
        while (big[i] != '\0' && i < len)
        {
                j = 0;
                while (big[i + j] == little[j] && (i + j) < len)
                {
                        j++;
                        if (little[j] == '\0')
                                return ((char *) &big[i]);
                }
                i++;
        }
        return (NULL);
}
