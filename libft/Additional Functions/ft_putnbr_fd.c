/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:34:11 by stee              #+#    #+#             */
/*   Updated: 2025/10/17 11:36:55 by stee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
        long long       ll;

        ll = n;
        if (ll < 0)
        {
                ft_putchar_fd('-', fd);
                ll *= -1;
        }
        if (ll >= 10)
        {
                ft_putnbr_fd((ll / 10), fd);
                ft_putchar_fd(((ll % 10) + '0'), fd);
        }
        else
                ft_putchar_fd((ll + '0'), fd);
}
