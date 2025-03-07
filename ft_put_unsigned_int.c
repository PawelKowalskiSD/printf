/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 17:33:16 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/07 15:21:27 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_put_unsigned_int(unsigned int num)
{
	int static	count;

	count = 0;
	if (num > 0)
	{
		ft_put_unsigned_int(num / 10);
		count += ft_putchar(num % 10 + '0');
	}
	return (count);
}
