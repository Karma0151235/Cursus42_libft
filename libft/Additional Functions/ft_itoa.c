/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:55:16 by stee              #+#    #+#             */
/*   Updated: 2025/10/17 13:40:08 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countlen(long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n >= 1)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static int	ft_handleneg(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (1);
	}
	return (0);
}

static char	*ft_inttostr(int n, size_t len, char *str)
{
	str[len] = '\0';
	len--;
	if (ft_handleneg(n) == 1)
	{
		while (len > 0)
		{
			str[--len] = ((n % 10) + '0');
			n /= 10;
		}
		str[0] = '-';
	}
	else
	{
		while (len >= 0)
		{
			str[--len] = ((n % 10) + '0');
			n /= 10;
		}
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	nb;
	char	*str;

	nb = (long) n;
	len = ft_countlen(nb);
	str = ft_calloc(len, sizeof(char))
		return (ft_inttostr(nb, len, str));
}
