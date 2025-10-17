/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:52:44 by stee              #+#    #+#             */
/*   Updated: 2025/10/17 12:00:26 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
	}
	return (0);
}

static size_t	ft_count(char const *s1, char const set)
{
	size_t	ct;
	size_t	i;

	i = 0;
	ct = 0;
	while (s1[i] != '\0')
	{
		if (!(ft_in_set(s1[i])))
			ct++;
		i++;
	}
	return (ct);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*str;
	size_t		i;
	size_t		j;

	str = (char *) malloc(sizeof(char) * (ft_count(s1, set) + 1));
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (!(ft_in_set(str[i])))
		{
			str[j] = s1[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
