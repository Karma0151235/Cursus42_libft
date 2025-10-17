/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:35:01 by stee              #+#    #+#             */
/*   Updated: 2025/10/17 10:38:31 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        unsigned char           *ptrdest;
        const unsigned char     *srcdest;

        if (dest == NULL && src == NULL)
                return (NULL);
        ptrdest = (unsigned char *) dest;
        srcdest = (const unsigned char *) src;
        while (n--)
                *ptrdest++ = *ptrsrc++;
        return (dest);
}
