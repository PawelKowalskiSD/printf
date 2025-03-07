/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:51:01 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/07 16:10:38 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int num)
{
	int static	count;

	count = 0;
	if (num == -2147483648)
		return (ft_putstr("-2147483648"));
	if (num == 0)
		return (ft_putchar('0'));
	if (num < 0)
	{
		count += ft_putchar('-');
		num = -num;
	}
	if (num > 0)
	{
		if ((num / 10) != 0)
			ft_putnbr(num / 10);
		count += ft_putchar(num % 10 + '0');
	}
	return (count);
}
