/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:51:01 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/11 19:48:47 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	int		count;
	char	*s;

	if (num == -2147483648)
		return (ft_putstr("-2147483648"));
	if (num == 0)
		return (ft_putchar('0'));
	if (num > 0)
	{
		s = ft_digit_process(num);
		count = ft_putstr(s);
	}
	if (num < 0)
	{
		num = -num;
		s = ft_digit_process(num);
		ft_putchar('-');
		count = ft_putstr(s) + 1;
	}
	free(s);
	return (count);
}
