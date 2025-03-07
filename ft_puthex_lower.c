/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:07:35 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/07 15:24:55 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex_lower(uintptr_t num)
{
	int			result;
	int static	count;

	count = 0;
	if (num >= 16)
		ft_puthex_lower(num / 16);
	result = num % 16;
	if (result < 10)
		count += ft_putchar(result + '0');
	else
		count += ft_putchar(result + 39 + '0');
	return (count);
}
