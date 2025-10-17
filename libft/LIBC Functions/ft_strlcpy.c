/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:42:05 by stee              #+#    #+#             */
/*   Updated: 2025/10/17 10:43:37 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  strlcpy(char *dst, const char *src, size_t dstsize)
{
        size_t          i;
        size_t          srclen;

        srclen = ft_strlen(src);
        i = 0;
        if (dstsize != 0)
        {
                while (i < (dstsize - 1) && src[i] != '\0')
                {
                        dst[i] = src[i];
                        i++;
                }
                dst[i] = '\0';
        }
        return (srclen);
}
