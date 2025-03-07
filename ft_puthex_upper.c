/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:08:09 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/07 15:24:42 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex_upper(uintptr_t num)
{
	int static	count;
	int			result;

	count = 0;
	if (num >= 16)
		ft_puthex_upper(num / 16);
	result = num % 16;
	if (result < 10)
		count += ft_putchar(result + '0');
	else
		count += ft_putchar(result + 7 + '0');
	return (count);
}
