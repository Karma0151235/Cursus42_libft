/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:58:54 by stee              #+#    #+#             */
/*   Updated: 2025/10/17 11:00:01 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
        unsigned const char     *p1;
        unsigned const char     *p2;

        p1 = (unsigned const char *) s1;
        p2 = (unsigned const char *) s2;
        while (n--)
        {
                if (*p1 != *p2)
                        return (*p1 - *p2);
                p1++;
                p2++;
        }
        return (0);
}
