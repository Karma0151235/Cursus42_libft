/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:55:47 by stee              #+#    #+#             */
/*   Updated: 2025/10/17 10:57:08 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
        size_t  i;

        i = 0;
        while (i < n)
        {
                if (s1[i] != s2[i] || s1[i] == '\0')
                        return ((unsigned char) s1[i] - (unsigned char) s2[i]);
                i++;
        }
        return (0);
}
